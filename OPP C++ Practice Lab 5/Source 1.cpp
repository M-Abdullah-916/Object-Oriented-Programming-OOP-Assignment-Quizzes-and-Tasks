#include <iostream>
using namespace std;

class Operators
{
public:
	int A;
	Operators *B;
	Operators(int a=0)
	{
		A = a;
	}

	void *operator new(size_t A)
	{
		cout << "Enter the Size of the DMA Memory : ";
		cin >> A;                                               // new operator
		Operators *ptr = new Operators[A];
		return ptr;
	}

	Operators operator()(int a)
	{
		return A + a;                                           // () operator
	}

	friend ostream& operator<<(ostream &a, Operators &b);

	Operators *operator -> ()
	{
		return B;                                               // -> operator
	}

	Operators operator %= (Operators a)
	{
		int b;
		cout << "Enter value to take mod with : ";              // %= operator
		cin >> b;
		return a.A %= b;
	}

};

ostream& operator<<(ostream &a,Operators &b)
{
	a << "Value of Variable is : " << b.A;
	return a;
}

int main()
{
	Operators *A = new Operators[2];      // using new opt
	cout << endl;

	Operators B;                         // using () opt
	cout << B(2);
	cout << endl;

	Operators C(12);                    // using << opt
	cout << C;
	cout << endl;

	Operators D(10);                    // using -> opt
	//cout << D->A;
	cout << endl;

	Operators E(12);                   // using %= opt
    E%=12;

	cout << endl << endl;
	system("pause");
}