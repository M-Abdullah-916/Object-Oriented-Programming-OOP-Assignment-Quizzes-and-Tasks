#include <iostream>
using namespace std;
                         //Classes to be define
class Student
{
protected:
	char name[25];
	int age;                           // base class
	char admission_no[15];
	char address[30];

	void getStudent()
	{
		cout << "Enter the name of the student : ";
		cin >> name;
		cout << "Enter the age of the student : ";
		cin >> age;
		cout << "Enter the admission number of the student : ";
		cin >> admission_no;
		cout << "Enter the address of the student : ";
		cin >> address;
	}
};

class Graduate :public Student
{
public:
	char degree_program[30];
	void getStudent()
	{
		cout << "Enter the name of the student : ";
		cin >> name;
		cout << "Enter the age of the student : ";
		cin >> age;
		cout << "Enter the admission number of the student : ";        // derived class
		cin >> admission_no;
		cout << "Enter the address of the student : ";
		cin >> address;
		cout << "Enter the degree of the student : ";
		cin >> degree_program;
	}
	void display()
	{
		cout << "Name of the student is : " << name << endl;
		cout << "Age of the student is : " << age << endl;
		cout << "Admission number of the student is : " << admission_no << endl;
		cout << "Address of the student is : " << address << endl;
		cout << "Degree program of the student is : " << degree_program << endl;
	}
};

class Under_Graduate :public Student
{
public:
	char degree_program[30];
	void getStudent()
	{
		cout << "Enter the name of the student : ";
		cin >> name;
		cout << "Enter the age of the student : ";
		cin >> age;
		cout << "Enter the admission number of the student : ";         // derived class
		cin >> admission_no;
		cout << "Enter the address of the student : ";
		cin >> address;
		cout << "Enter the degree of the student : ";
		cin >> degree_program;
	}
	void display()
	{
		cout << "Name of the student is : " << name << endl;
		cout << "Age of the student is : " << age << endl;
		cout << "Admission number of the student is : " << admission_no << endl;
		cout << "Address of the student is : " << address << endl;
		cout << "Degree program of the student is : " << degree_program << endl;
	}
};

int main()
{
	Graduate G;
	Under_Graduate UG;

	cout << "Enter the Information for Graduate Student ! " << endl<<endl;
	G.getStudent();
	cout << endl;
	cout << "Enter the Information for Under Graduate Student ! " << endl << endl;
	UG.getStudent();
	cout << endl;

	cout << "**********GRADUATE STUDENT**********" << endl<<endl;
	G.display();
	cout << endl;
	cout << "**********UNDER-GRADUATE STUDENT**********" << endl<<endl;
	UG.display();
	cout << endl;
	

	cout << endl << endl;
	system("pause");
}