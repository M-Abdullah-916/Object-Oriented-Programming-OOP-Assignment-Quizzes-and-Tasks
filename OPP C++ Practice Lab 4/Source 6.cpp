#include<iostream>
using namespace std;

class Teacher;
class Students
{
public:
	void getter()
	{
		cout << "Enter Name of the Student : ";
		cin >> name;
		cout << "Enter ID of the Student : ";
		cin >> id;
		cout << "Enter GPA of the Student : ";
		cin >> gpa;
	}
	void setter()
	{
		cout << endl << "Name of the Student is : " << name << endl;
		cout << "ID of the Student is : " << id << endl;
		cout << "GPA of the Student is : " << gpa << endl;
	}
	friend Teacher;
private:
	char name[20];
	char id[15];
	float gpa;
};

class Teacher
{
public:
	void GPA(Students *S)
	{
		float choice = 0;
		cout << "Enter New Gpa for " << S->name << "  " << S->id << "  whose current GPA is " << S->gpa << "  : ";
		cin >> choice;
		S->gpa = choice;
	}

};

int main()
{
	Students *S = new Students[10];
	Teacher T;
	                         // inputting values
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the Data of " << i + 1 << " Student : " << endl;
		S[i].getter();
		cout << endl;
	}

	cout << endl;            // chaining GPA of first 3 students
	for (int i = 0; i < 3; i++)
	{
		T.GPA(&S[i]);
	}

	cout << endl;             // outputting values
	for (int i = 0; i < 10; i++)
	{
		cout << "The Data of " << i + 1 << " Student is : " << endl;
		S[i].setter();
		cout << endl;
	}

	cout << endl << endl;
	system("pause");
}