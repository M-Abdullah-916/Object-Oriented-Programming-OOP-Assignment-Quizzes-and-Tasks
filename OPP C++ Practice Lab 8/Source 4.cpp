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
	friend void operator++ (operators &a,int);
private:
	int a;
};


void operator++ (operators &obj,int)
{
	obj.a++;
}

int main()
{
	operators A;

	cout << "Before Post-Increment (Using friend Function) : ";
	A.display();
	A++;
	cout << "After  Post-Increment (Using friend Function) : ";
	A.display();

	cout << endl << endl;
	system("pause");
}
