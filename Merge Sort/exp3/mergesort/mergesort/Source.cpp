#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int a[20];
int b[20];

void merge(int low, int mid, int high)
{
	int h = low, i = low, j = mid + 1;
	while ((h <= mid) && (j <= high))
	{
		if (a[h] <= a[j])
		{
			b[i] = a[h];
			h = h + 1;
		}

		else {
			b[i] = a[j];
			j = j + 1;
		}
		i = i + 1;
	}
	if (h > mid) {
		for (int k = j; k <= h; k++)
		{
			b[i] = a[k];
			i = i + 1;
		}
	}

	else
	{
		for (int k = h; k <= mid; k++)
		{
			b[i] = a[k];
			i = i + 1;
		}
	}
	for (int k = low; k <= high; k++)
	{
		a[k] = b[k];
	}
}

void mergesort(int low, int high)
{
	if (low < high)
	{
		int mid = floor[(low + high) / 2];
		mergesort(low, mid);
		mergesort(mid + 1, high);
		merge(low, mid, high);
	}
}

void main()
{
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	cout << "Entered Array: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	mergesort(0, n - 1);

	cout << "Enter sorted array: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	_getch();
}