#include <iostream>
using namespace std;

class operators
{
public:
	operators()
	{
		a = 13;
	}
	void display()
	{
		cout << a << endl;
	}
	friend void operator++ (operators &a);
private:
	int a;
};


void operator++ (operators &obj)
{
	++obj.a;
}

int main()
{
	operators A;

	cout << "Before Pre-Increment (Using friend Function) : ";
	A.display();
	++A;
	cout << "After  Pre-Increment (Using friend Function) : ";
	A.display();

	cout << endl << endl;
	system("pause");
}
