#include <iostream>
#include <conio.h>
using namespace std;
int binsearch(int arr[], int low, int high, int x)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binsearch(arr, low, mid - 1, x);

		return binsearch(arr, mid + 1, high, x);
	}
	return -1;
}


void main() {
	int arr[20], size, key, pos;
	cout << "Enter size of array: ";
	cin >> size;
	cout << "\nEnter sorted array: ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "\nEnter element to search: ";
	cin >> key;
	pos = binsearch(arr, 0, size - 1, key);
	if (pos == -1)
		cout << "\nElement not found!";
	else
		cout << "\nElement found at position: " << pos + 1;
	_getch();
}