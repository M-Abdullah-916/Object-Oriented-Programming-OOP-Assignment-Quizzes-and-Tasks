#include <iostream>
using namespace std;
int FIB(int a);

int main()
{
	cout << "This program will help to show the given Fibonacci number " << endl;
	int size = 0;
	cout << endl << "Enter the Number of the  Fibonacci series : ";
	cin >> size;
	cout << endl << size <<" Fibonacci Number is : ";
	cout << FIB(size);

	cout << endl << endl;
	system("pause");
}

int FIB(int a)
{
	if (a == 0 || a == 1)
		return a;
	return (FIB(a - 1) + FIB(a - 2));
}
