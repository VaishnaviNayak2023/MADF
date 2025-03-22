#include<iostream> 
#include<conio.h> 
using namespace std; 
void mul(int a[50][50], int b[50][50], int m, int n, int p)
{
	int c[50][50], i, j, k;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	cout << "Result matrix: " << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
} 

int main() 
{
	int a[50][50], b[50][50], m, n, p, q;  	
	cout << "Enter the rows and columns of matrix MxN: ";  	
	cin >> m >> n;
	cout << "Enter the elements in Matrix A: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter the rows and columns of Matrix NxP: ";
	cin >> p >> q;  	
	
	if (n == p)
	{
		cout << "Enter the elements of Matrix B: ";
		for (int i = 0; i < p; i++)
		{
			for (int j = 0; j < q; j++)
			{
				cin >> b[i][j];
			}
		}
		mul(a, b, m, n, q);

	}

	else
	{
		cout << "Matrix multiplication cannot be performed. ";
	}

	_getch();  	
	return 0;
}
