#include <iostream>
using namespace std;
int FIB(int a);

int main()
{
	cout << "This program will help show the Fibonacci series " << endl;
	int size=0;
	cout <<endl<< "Enter the Number of the  Fibonacci series : ";
	cin >> size;
	cout << endl << "Fibonacci series : ";
	for (int i = 1; i <= size; i++)
	{
		cout << FIB(i)<<" ";
	}
	
	cout << endl << endl;
	system("pause");
}

int FIB(int a)
{
	if (a == 0 || a == 1)
		return a;
	return (FIB(a-1) + FIB(a-2));
}