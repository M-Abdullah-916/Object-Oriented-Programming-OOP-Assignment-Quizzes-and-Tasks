#include <iostream>
using namespace std;

class B;

class A
{
public:
	A()
	{
		x = 1;
	}
	friend B;
private:
	int x;
};

class B
{
public:
	void data(A obj1)
	{
		cout << "Enter any Number (From B to A) : ";
		cin >> obj1.x;

		cout << endl << endl << "Entered Number From B to A is : " << obj1.x;

	}
};

int main()
{
	A obj1;
	B obj2;

	obj2.data(obj1);

	cout << endl << endl;
	system("pause");
}
