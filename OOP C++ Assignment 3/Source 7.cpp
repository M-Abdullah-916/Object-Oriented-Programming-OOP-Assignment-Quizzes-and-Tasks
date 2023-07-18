#include <iostream>
using namespace std;

int Palindrome(const string &, int, int);

int main()
{
	char ptr[50];
	
	cout << "Enter the String to check whether it is Palindrome or Not : ";
	cin >> ptr;

	if (Palindrome(ptr, 0, strlen(ptr) - 1))
		cout << endl << "The given String is a Palindrome : " << ptr << endl;
	else
		cout << endl << "The given String is not a Palindrome : " << ptr << endl;

	cout << endl << endl;
	system("pause");
}

int Palindrome(const string &ptr, int a, int b)
{
	if (a >= b)
		return 1;
	if(ptr[a] != ptr[b])
		return 0;
	return Palindrome(ptr, ++a, --b);
}