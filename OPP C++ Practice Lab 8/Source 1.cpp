#include <iostream>
using namespace std;

class operators
{
public:
	int a;
	operators()
	{
		a = 13;
	}
	operators operator++ ()
	{
		operators temporary;
		temporary.a = ++a;
		return temporary;
	}
};

int main()
{
	operators A,B;

	cout << "Before Pre-Increment : " << A.a << endl; 
	A = ++B;
	cout << "After  Pre-Increment : " << A.a;

	cout << endl << endl;
	system("pause");
}