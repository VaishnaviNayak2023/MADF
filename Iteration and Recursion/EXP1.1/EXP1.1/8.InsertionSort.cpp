#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int n, i = 0, j;
	int arr[20];
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter elements: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (i = 1; i < n; i++)
	{
		int k = arr[i];
		for (j = i - 1; j >= 0 && k < arr[j]; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = k;	
	}

	cout << "Sorted Array: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	_getch();
}