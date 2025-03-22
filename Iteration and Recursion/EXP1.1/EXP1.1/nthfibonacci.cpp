#include <iostream>
#include <conio.h>
using namespace std;


int nthfibonacci(int n) {

	if (n <= 1) {
		return n;
	}
	else {
		return nthfibonacci(n - 1) + nthfibonacci(n - 2);
	}
}


int main() {

	int n;
	cout << "To find the nth Fibonacci number: ";
	cin >> n;


	if (n < 0) {
		cout << "Invalid input!! Enter a non-negative integer!!" << endl;
		return 1;
	}

	int x = n - 1;
	int result = nthfibonacci(x);
	cout << "Fibonacci Term: " << result << endl;
	_getch();

	return 0;

}
