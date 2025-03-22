#include <iostream>
#include <conio.h>
using namespace std;
int fibonaccirecur(int n)
{
	if (n <= 1)
		return n;
	else
		return(fibonaccirecur(n - 1) + fibonaccirecur(n - 2));
}
void main()
{
	int terms;
	printf("Enter number of terms: ");
	cin >> terms;
	if (terms <= 0)
		cout << "Please enter a positive integer";

	else
		cout << "Fibonacci sequence:";
	
	for (int i = 0; i < terms; i++)
	{
		cout << fibonaccirecur(i) << " ";
	}

	_getch();
}

