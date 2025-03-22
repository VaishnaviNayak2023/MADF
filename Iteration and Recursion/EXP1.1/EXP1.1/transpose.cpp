#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a[10][10], sum[10][10];
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

	cout << "Transpose of the matrix: " << endl;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cout << a[j][i] << "\t";
		}
		cout << "\n";
	}
	_getch();
}