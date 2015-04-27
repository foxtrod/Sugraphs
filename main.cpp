#include <iostream>
#include <fstream>

using namespace std;

void print(int **a, int n, int m)
{
	cout <<endl;
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
		{	
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void sugraph(int **a, int n, int m)
{
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
		{
			if (a[i][j] == 1 && a[j][i] == 1)
			{
				a[i][j] = 0; 
				a[j][i] = 0;
				print(a, n, m);
			}
		}
	}
}

int main()
{
	int n, m;
	cout << "Graph: " << endl;
	ifstream ifs("5.txt");
	ifs >> n >> m;
	int ** a = new int *[n];
	for (int i = 0; i < n ; i ++, cout << endl)
	{
		a[i] = new int[m];
		for (int j = 0; j < m ; j ++)
		{
			ifs >> a[i][j];
			cout << a[i][j] << " ";
		}
	}
	cout << "Sugraphs: " << endl;
	sugraph(a, n, m);
	return 0;
}
