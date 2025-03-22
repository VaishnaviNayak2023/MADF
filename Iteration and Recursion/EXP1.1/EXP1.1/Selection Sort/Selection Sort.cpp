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

	for (i = 0; i < n; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	


	cout << "Sorted Array: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	_getch();
}