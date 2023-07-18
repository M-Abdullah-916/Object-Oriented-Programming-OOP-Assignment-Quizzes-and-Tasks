#include <iostream>
using namespace std;
int sum(int a);

int main()
{
	cout << "This program will help to take the sum of user given numbers " << endl;
	int  size;
	cout << "Enter the number : ";
	cin >> size;
	cout << "Sum of the sereis = ";
	cout << sum(size);


	cout << endl << endl;
	system("pause");
}
int sum(int a)
{
	if (a == 1)
		return a;
	a = a + sum(a - 1);
	return a;

}