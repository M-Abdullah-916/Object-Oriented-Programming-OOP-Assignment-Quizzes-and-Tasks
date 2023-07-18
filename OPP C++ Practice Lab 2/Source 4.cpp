#include <iostream>
using namespace std;
                         //Classes to be define
class Employee
{
public:
	char name[25];
	char id[15];

	void setvalues()
	{
		cout << "Enter the Name of the Employee : ";
		cin >> name;
		cout << "Enter the ID of the Employee : ";
		cin >> id;
	}
	void showvalues()
	{
		cout << "The Name of the Employee is : " << name;
		cout << "The Id of the Employee is : " << id;
	}
};
class Student
{
public:
	char uni_name[50];
	char degree[25];

	void setvalues()
	{
		cout << "Enter the Name of the University of Student : ";
		cin >> uni_name;
		cout << "Enter the Degree of the Student : ";
		cin >> degree;
	}
	void showvalues()
	{
		cout << "The Name of the University of Student is : " << uni_name;
		cout << "The Degree of the Student is : " << degree;
	}
};
class Manager :public Employee, public Student
{
public:
	char title[25];
	int dues;

	void setvalues()
	{
		cout << "Enter the Name of the University of Student : ";
		cin >> uni_name;
		cout << "Enter the Degree of the Student : ";
		cin >> degree;
		cout << "Enter the Name of the Employee : ";
		cin >> name;
		cout << "Enter the ID of the Employee : ";
		cin >> id;
		cout << "Enter the Title of the Manager : ";
		cin >> title;
		cout << "Enter the Dues of the Manager : ";
		cin >> dues;
	}
	void showvalues()
	{
		cout << endl << "The Name of the University of Student is : " << uni_name;
		cout << endl << "The Degree of the Student is : " << degree;
		cout << endl << "The Name of the Employee is : " << name;
		cout << endl << "The Id of the Employee is : " << id;
		cout << endl << "The Title of the Manager is : " << title;
		cout << endl << "The Dues of the Employee are : " << dues;
	}

};
class Scientist :public Employee, public Student
{
public:
	int no_of_publications;

	void setvalues()
	{
		cout << "Enter the Name of the University of Student : ";
		cin >> uni_name;
		cout << "Enter the Degree of the Student : ";
		cin >> degree;
		cout << "Enter the Name of the Employee : ";
		cin >> name;
		cout << "Enter the ID of the Employee : ";
		cin >> id;
		cout << "Enter the Number of Publciations of the Scientist : ";
		cin >> no_of_publications;
	}
	void showvalues()
	{
		cout << endl << "The Name of the University of Student is : " << uni_name;
		cout << endl << "The Degree of the Student is : " << degree;
		cout << endl << "The Name of the Employee is : " << name;
		cout << endl << "The Id of the Employee is : " << id;
		cout << endl << "The Number of Publciations of the Scientist is : " << no_of_publications;
	}

};
int main()
{
	Manager M;
	Scientist S;
	cout << "Inputting values for Manager " << endl;
	M.setvalues();
	cout <<endl<< "Inputting values for Scientist " << endl;
	S.setvalues();
	cout <<endl<< "Displaying values for Manager " << endl;
	M.showvalues();
	cout << endl << "Displaying values for Scientist " << endl;
	S.showvalues();

	cout << endl << endl;
	system("pause");
}