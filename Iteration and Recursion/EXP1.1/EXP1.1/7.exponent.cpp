#include <iostream>
#include <conio.h>
using namespace std;
int power(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}

	else
	{
		return base*power(base, exp - 1);
	}
}

void main()
{
	int num, pow;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter power: ";
	cin >> pow;
	cout << "Answer: " << power(num, pow);
	_getch();

}