#include <iostream>
using namespace std;
                         //Classes to be define
class Student
{
public:
	char roll_no[15];
	void get_roll_no()
	{
		cout << "Enter you roll number : ";             // base class
		cin >> roll_no;
	}
	void disp_roll_no()
	{
		cout << "Entered roll number is : " << roll_no;
	}
};
class Subject :public Student
{
public:
	float sub1,sub2;
	void get_roll_no()
	{
		cout << "Enter you roll number : ";             // derived class of student
		cin >> roll_no;
		cout << "Enter your marks in OOP : ";
		cin >> sub1;
		cout << "Enter your marks in Discreet Structures : ";
		cin >> sub2;
	}

};
class Sports
{
public:
	float marks;
	void sport()
	{
		cout << "Enter your marks in sports : ";
		cin >> marks;
	}
};
class Result:public Subject,public Sports
{
public:
	void total()
	{
		cout << endl<<"Total subject scores obtained by student is : " << sub1 + sub2<<endl;
		cout << "Total sport scores obtained by student is : " << marks<<endl;
		cout <<endl<< "Overall collecively the score becomes : " << sub1 + sub2 + marks;
	}
};

int main()
{
	Result std;
	std.get_roll_no();
	std.sport();
	std.total();

	cout << endl << endl;
	system("pause");
}