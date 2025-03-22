#include <iostream>
#include <conio.h>
using namespace std;
void TowersOfHanoi(int x, int y, int z, int n)
{
	if (n == 1)
	{
		cout << "Move first disk from Tower " << x << " to Tower " << y << endl;
	}
	TowersOfHanoi(n - 1, x, z, y);    //Move the disk
	cout << "Move disk " << n << " from Tower " << x << " to Tower " << y << endl;
	TowersOfHanoi(n - 1, z, x, y);          //Move the disk
}

void printTowersOfHanoi()
{

}

void main()
{
	_getch();
}