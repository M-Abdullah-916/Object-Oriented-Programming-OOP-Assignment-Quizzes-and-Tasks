#include <iostream>
using namespace std;

class B_Over_Riding
{
public:

	virtual void M_A(int a = 0)
	{
		cout << "BASE: " << a << endl;
	}

	virtual void M_A(float a = 0, int b = 0)
	{
		cout << "BASE: " << a <<" , " << b <<endl;
	}

	virtual void M_A(char a = 'a', float b = 0, int c = 0)
	{
		cout << "BASE: " << a << " , " << b <<" , " << c << endl;
	}

};
class D_Over_Riding :public B_Over_Riding
{
public:

};

int main()
{
	D_Over_Riding Der;


	Der.M_A(1);
	Der.M_A(1.1, 2);                  // Calling Function of Base Class Without over-riding in derived class
	Der.M_A('A', 2.2, 1);                 // It is  possible as shown in output
	 
	cout << endl << endl;
	system("pause");
}