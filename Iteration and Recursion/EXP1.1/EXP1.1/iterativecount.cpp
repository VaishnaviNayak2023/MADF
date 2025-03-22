#include <iostream>
#include <conio.h>
using namespace std;
int sum(int arr[10], int n)
{
	int sum = 0, count = 0;
	count = count + 1;
	for (int i = 0; i < n; i++)    //beginning of for loop
	{
		count = count + 1;
		sum = sum + arr[i];        //assignment statement
		count = count + 1;     
	} 
	count = count + 1;           //end of for loop
	count = count + 1;          //output statement
	cout << "Number of Statements executed are: " << count << endl;
	count = count + 1; //return stmt
	return sum;
}

int main()
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
	int result = sum(arr, n);
	cout << "Iterative sum: " << result << endl;
	_getch();
}