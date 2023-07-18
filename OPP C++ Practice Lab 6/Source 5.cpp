#include <iostream>
using namespace std;

class Account
{
public:

	virtual void Calculate() = 0;
	virtual void Show() = 0;

};

class Current :public Account
{
public:

	void Calculate()
	{
		cout << "Total Salary is : 10,000 " << endl;
		cout << "Zakaat Deduction of 2.5% on Salary is = " << ((2.5 * 10000) / 100) << endl;
	}

	void Show()
	{
		cout << "Salary After Zakaat Deduction is : " << 10000 - ((2.5 * 10000) / 100) << endl;
	}
};

class Saving :public Account
{
public:

	void Calculate()
	{
		cout << "Total Salary is : 10,000 " << endl;
		cout << "Annual Increment of 5% on Salary is = " << (5 * 10000) / 100 << endl;
		cout << "Zakaat Deduction of 2.5% on Salary is = " << ((2.5 * 10000) / 100) << endl;
	}

	void Show()
	{
		cout << endl << "Salary After Annual Increment is : " << ((5 * 10000) / 100) + 10000 << endl;
		cout << "Salary After Zakaat Deduction is : " << 10000 - ((2.5 * 10000) / 100)  << endl;
		cout << "Over-All Salary Becomes : " << (((5 * 10000) / 100) + 10000) - ((2.5 * 10000) / 100);
	}

};

int main()
{
	Account *A;
	Saving S;
	Current C;

	cout << "Data For Saving Account " << endl << endl;
	A = &S;
	A->Calculate();
	A->Show();

	cout << endl << endl << "Data For Current Account " << endl << endl;
	A = &C;
	A->Calculate();
	A->Show();


	cout << endl << endl;
	system("pause");
}