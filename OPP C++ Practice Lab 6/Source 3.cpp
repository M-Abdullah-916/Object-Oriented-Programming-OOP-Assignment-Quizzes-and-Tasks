#include <iostream>
using namespace std;

class Employee
{
public:

	virtual void Calculate_Pay()
	{
		cout << "Employee Class Dosen't have Any Method To Calculate Pay " << endl;
	}

};

class Manager :public Employee
{
public:

	void Calculate_Pay()
	{
		cout << "The Calculated Pay of The Manager is : $$$$" << endl;
	}
};

class Hourly :public Employee
{
public:

	void Calculate_Pay()
	{
		cout << "Hourly Pay is : $50 " << endl;
	}

};

int main()
{
	Employee *PTR,E;
	Manager M;
	Hourly H;

	PTR = &E;
	PTR->Calculate_Pay();                       // For Employee

	PTR = &M;
	PTR->Calculate_Pay();                       // For Manager

	PTR = &H;
	PTR->Calculate_Pay();                      // For Hourly
	 
	cout << endl << endl;
	system("pause");
}