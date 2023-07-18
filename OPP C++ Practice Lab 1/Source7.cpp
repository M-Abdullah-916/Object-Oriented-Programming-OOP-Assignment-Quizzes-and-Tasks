#include <iostream>
using namespace std;


int main()
{
	cout << "This program will help show the Factorial of given series " << endl;
	int size = 0,fact=1;
	cout << endl << "Enter the Number of the Factorial to generate serires : ";
	cin >> size;

	for (int i = 1; i <= size; i++)
	{
		fact = fact*i;
	}
	cout << "Factorial of given series = " << fact;
	cout << endl << endl;
	system("pause");
}