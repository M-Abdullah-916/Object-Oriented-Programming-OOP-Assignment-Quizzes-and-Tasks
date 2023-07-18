#include <iostream>
using namespace std;

class Employee
{
public:
	Employee()
	{
		name[25] = 0; mobile_number[15] = 0, emp_id[15] = 0;
	}

	class DOB {             // DOB nested class
	public:
		DOB()
		{
			Date = 0, Month = 0, Year = 0;
		}
		void setter();
		void getter();
	private:
		int Date;
		int Month;
		int Year;
	};
	void setter();
	void getter();
private:
	char name[25];
	char mobile_number[15];
	char emp_id[15];
};
void Employee::setter()
{
	cout << "Enter the name of Employee : ";
	cin >> name;
	cout << "Enter the Mobile number of Employee : ";
	cin >> mobile_number;
	cout << "Enter the ID of Employee : ";
	cin >> emp_id;
}
void Employee::DOB::setter()
{
	cout << "Enter the Date of Birth of Employee : ";
	cin >> Date;
	cout << "Enter the Month of Birth of Employee : ";
	cin >> Month;
	cout << "Enter the Year of Birth of Employee : ";
	cin >> Year;
}
void Employee::getter()
{
	cout << "The name of Employee is : "<<name<<endl;
	cout << "The Mobile number of Employee is : "<<mobile_number<<endl;
	cout << "The ID of Employee is : "<<emp_id;
}
void Employee::DOB::getter()
{
	cout <<endl<< "The DOB of Employee is : " << Date << " / " << Month << " / " << Year;
}
int main()
{
	Employee obj1;
	Employee::DOB obj2;
	obj1.setter();
	obj2.setter();
	cout << endl;
	cout << "Information about the Employee is : " << endl<<endl;
	obj1.getter();
	obj2.getter();
	
	cout << endl << endl;
	system("pause");
}