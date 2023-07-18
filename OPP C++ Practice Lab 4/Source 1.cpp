#include <iostream>
using namespace std;

class two;
class one
{
public:
	void getter()
	{
		cout << "Enter the 1st Number : ";
		cin >> num1;
	}
	void friend Friend_Function(one, two);
private:
	int num1;
};
class two
{
public:
	void getter()
	{
		cout << "Enter the 2nd Number : ";
		cin >> num2;
	}
	void friend Friend_Function(one, two);
private:
	int num2;
};

int main()
{
	one obj1;
	two obj2;
	obj1.getter();
	obj2.getter();
	cout << endl;
	Friend_Function(obj1, obj2);


	cout << endl << endl;
	system("pause");
}

void Friend_Function(one a, two b)
{
	if (a.num1 > b.num2)
	{
		cout << a.num1 << " is the Greater Number !" << endl;
	}
	else if (a.num1 < b.num2)
	{
		cout << b.num2 << " is the Greater Number !" << endl;
	}
	else
		cout << a.num1 << " is Equal to " << b.num2;
}