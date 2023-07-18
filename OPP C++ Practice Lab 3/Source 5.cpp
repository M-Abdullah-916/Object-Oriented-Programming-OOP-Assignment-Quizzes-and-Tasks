#include <iostream>
#include<string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person()
	{
		age = 0;
	}
	Person(string n, int a):name(NULL),age(0)
	{
		name = n;
		age = a;
	}
	void getdata()
	{
		cout << "Enter the Name of Person : ";
		cin >> name;
		cout << "Enter Age of the Person  : ";          // Base Person class
		cin >> age;
	}
	void showdata()
	{
		cout << endl << "Name of the Person is : " << name;
		cout << endl << "Age of the Person is : " << age;
	}
};

class Student :public Person
{
private:
	string id_no;
public:
	Student(){}
	Student(string n):id_no(NULL),Person(NULL,0)
	{
		id_no = n;
	}
	void getdata()
	{
		cout << "Enter the Name of Student : ";
		cin >> name;
		cout << "Enter Age of the Student  : ";
		cin >> age;
		cout << "Enter the ID number of the student : ";
		cin >> id_no;
	}
	void showdata()                                               // Derived Student Class
	{
		cout << endl << "Name of the Student is : " << name;
		cout << endl << "Age of the Student is : " << age;
		cout << endl << "ID number of the Student is : " << id_no;
	}

};

class Employee :public Person
{
private:
	int salary;
public:
	Employee(){}
	Employee(int s) :salary(0), Person(NULL, 0)
	{
		salary = s;
	}
	void getdata()
	{
		cout << "Enter the Name of Employee : ";
		cin >> name;
		cout << "Enter Age of the Employee  : ";
		cin >> age;
		cout << "Enter the Salary of the Employee in rupees : ";
		cin >> salary;
	}
	void showdata()                                           // Derieved Employee class 
	{
		cout << endl << "Name of the Employee is : " << name;
		cout << endl << "Age of the Employee is : " << age;
		cout << endl << "Salary of the Employee is : " << salary;
	}
};

int main()
{
	Student S;
	Employee E;
	cout << "Getting values of Student" << endl;
	S.getdata();
	cout << endl << "Getting values of Employee" << endl;
	E.getdata();
	cout << endl;
	cout << endl << "Displaying values of Student" << endl;
	S.showdata();
	cout << endl << "Displaying values of Employee" << endl;
	E.showdata();


	cout << endl << endl;
	system("pause");
}
