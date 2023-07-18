#include <iostream>
using namespace std;
                         //Classes to be define
class Worker
{
public:
	char name[25];
	int Working_hours;

	void getvalues()
	{
		cout << "Enter Name of the Worker : ";
		cin >> name;
		cout << "Enter Wroking Hours of the Worker : ";
		cin >> Working_hours;
	}
	void display()
	{
		cout << "Name of the Worker is : "<<name<<endl;
		cout << "Working Hours of the Worker are : " << Working_hours;
	}
};
class Employee: public Worker
{
public:
	char name_of_the_department[50];
	int salary;

	void getvalues()
	{
	
		cout <<endl<< "Enter Name of the Employee : ";
		cin >> name;
		cout << "Enter Wroking Hours of the Employee : ";
		cin >> Working_hours;
		cout << "Enter the Name of the Department of Employee : ";
		cin >> name_of_the_department;
		cout << "Enter Salary of the Employee : ";
		cin >> salary;
	}
	void display()
	{
		cout << "Name of the Employee is : " << name << endl;
		cout << "Working Hours of the Employee are : " << Working_hours<<endl;
		cout << "Name of the Department of Employee is : " << name_of_the_department << endl;
		cout << "Salary of the Employee is : " << salary << endl;
	}
};
class Manager : public Worker
{
public:
	int managed_employees;
	int no_of_projects;

	void getvalues()
	{
		cout <<endl<< "Enter Name of the Manager : ";
		cin >> name;
		cout << "Enter Wroking Hours of the Manager : ";
		cin >> Working_hours;
		cout << "Enter Employees being Managed by Manager : ";
		cin >> managed_employees;
		cout << "Enter Number of Projects on which the Manager is working : ";
		cin >> no_of_projects;
	}
	void display()
	{
		cout << "Name of the Manager is : " << name << endl;
		cout << "Working Hours of the Manager are : " << Working_hours<<endl;
		cout << "Employees being Managed by Manager are : " << managed_employees << endl;
		cout << "Number of Projects on which Manager is working : " << no_of_projects << endl;
	}

};
int main()
{
	Employee *ptr1;
	Manager *ptr2;
	
	ptr1 = new Employee ;
	ptr2 = new Manager;
	
	cout << "Entering values for Employee " << endl;
	ptr1->getvalues();
	cout << endl << "Entering values for Manager " << endl;
	ptr2->getvalues();
	cout << endl << "Displaying values for Employee" << endl << endl;
	ptr1->display();
	cout << endl << "Displaying values for Manager" << endl << endl;
	ptr2->display();	

	delete ptr1;
	delete ptr2;
	ptr1 = NULL;
	ptr2 = NULL;
	cout << endl << endl;
	system("pause");
}