#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a[10][10], b[10][10], sum[10][10];
	int i, j, n;
	int rows, cols;
	cout << "Enter number of rows and cols: ";
	cin >> rows >> cols;
	cout << "Enter elements in  first array: ";
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Enter elements in second array: ";
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cin >> b[i][j];
		}
	}

	cout << "Sum of two matrices: " << endl;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cout << sum[i][j] << "\t";
			
		}
		cout << "\n";
	}
	_getch();
}