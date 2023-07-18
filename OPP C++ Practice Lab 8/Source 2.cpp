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
	operators operator++ (int)
	{
		operators temporary;
		temporary.a = a++;
		return temporary;
	}
};

int main()
{
	operators A,B;

	cout << "Before Post-Increment : " << A.a << endl; 
	A = B++;
	cout << "After  Post-Increment : " << A.a;

	cout << endl << endl;
	system("pause");
}