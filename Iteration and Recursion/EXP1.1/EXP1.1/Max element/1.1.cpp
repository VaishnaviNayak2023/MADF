#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	int n, i;
	int arr[20];
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter elements: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int result = arr[0];
	for (i = 0; i < n; i++)
	{
		if (result < arr[i])
		{
			result = arr[i];
		}
	}

	cout << "Maximum element in the array: " << result;
	_getch();
}