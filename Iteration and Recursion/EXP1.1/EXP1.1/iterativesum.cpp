#include <iostream>
#include <conio.h>
using namespace std;
void sum(int arr[10], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Iterative sum: " << sum;
}

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
	sum(arr, n);
	_getch();
}