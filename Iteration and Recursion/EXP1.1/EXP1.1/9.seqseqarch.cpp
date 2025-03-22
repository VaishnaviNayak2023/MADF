#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int arr[10], n, flag = 0, key;
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter element to search: ";
	cin >> key;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			flag = 1;
			cout << "Element found!!";
		}
	}

	if (flag == 0)
	{
		cout << "Element not found!!";
	}
	_getch();
}