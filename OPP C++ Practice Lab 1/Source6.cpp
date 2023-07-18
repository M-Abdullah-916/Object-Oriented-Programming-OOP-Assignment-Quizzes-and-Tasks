#include <iostream>
using namespace std;
int Fact(int a);

int main()
{
	cout << "This program will help show the Factorial of given series " << endl;
	int size = 0;
	cout << endl << "Enter the Number of the Factorial to generate serires : ";
	cin >> size;

	cout <<"Series become :"<< Fact(size);

	cout << endl << endl;
	system("pause");
}

int Fact(int a)
{
	if (a == 1)
		return a;
	return a*Fact(a - 1);
}