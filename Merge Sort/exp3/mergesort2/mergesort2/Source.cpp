#include <iostream>
#include <conio.h>
#include <fstream>
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
		int mid = (low + high) / 2;
		mergesort(low, mid);
		mergesort(mid + 1, high);
		merge(low, mid, high);
	}
}

int main()
{
	ifstream input("input.txt");
	if (!input) {
		cout << "Unable to open file!";
		return 1;
	}

	int n = 0;
	while (input >> a[n])
		n++;
	input.close();
	mergesort(0, 6);
	cout << "Sorted Array: ";
	for (int i = 0; i < 7; i++)
	{
		cout << a[i]<<" ";
	}

	_getch();
    return 0;
}