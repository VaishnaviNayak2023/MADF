#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a = 0, b = 1;
	int n, c;
	cout << "Enter a number: ";
	cin >> n;
	cout << a << " " << b << " ";
	for (int i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	_getch();

}