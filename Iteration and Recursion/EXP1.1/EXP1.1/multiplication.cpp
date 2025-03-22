#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a[10][10], b[10][10], mul[10][10];
	int i, j, k;
	int r, c;
	cout << "Enter number of rows and cols for arrays: ";
	cin >> r >> c;


	cout << "Enter elements in  first array: ";
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Enter elements in second array: ";
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> b[i][j];
		}
	}

	cout << "Multiplication of two matrices: " << endl;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			mul[i][j] = 0;
			for (k = 0; k < r; k++)
			{
				mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cout << mul[i][j] << " ";
		}
		cout << "\n";
	}

	
	_getch();
}