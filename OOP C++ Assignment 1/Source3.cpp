#include <iostream>
using namespace std;

struct Student_Record
{
	char name[30];
	float quiz1;
	float quiz2;
	float tq;   // total quiz marks
	float mid1;
	float mid2;
	float tm;   // total mids marks
	float Final;
	float total;
};
int main()
{
	Student_Record ST;
	cout << "This Program will tell about the price of pastries !" << endl<<endl;
	cout << "Enter the name of the student : ";
	cin.get(ST.name, 30);
	cout <<endl<< "Enter the marks of quiz 1 of "<<ST.name<<" (upto 10) : ";
	cin >> ST.quiz1;
	cout << "Enter the marks of quiz 2 of " << ST.name << "(upto 10) : ";
	cin >> ST.quiz2;
	ST.tq = ST.quiz1 + ST.quiz2;   // quizes marks finalize
	cout <<endl<< "Total points in quizes are : " << ST.tq;
	ST.tq = (ST.tq / 20) * 25;
	cout << endl << "Total marks in quizes are : " << ST.tq << endl;

	cout <<endl<< "Enter the marks of mid 1 of " << ST.name << " (upto 100) : ";
	cin >> ST.mid1;
	cout << "Enter the marks of mid 2 of " << ST.name << " (upto 100) : ";
	cin >> ST.mid2;
	ST.tm = ST.mid1 + ST.mid2;     // mids marks finalize
	cout <<endl<< "Total points in mids are : " << ST.tm;
	ST.tm = (ST.tm / 200) * 25;
	cout  <<endl<< "Total marks in mids are : " << ST.tm<<endl;

	cout <<endl<< "Enter the marks of Final of " << ST.name << " (upto 100) : ";
	cin >> ST.Final;               // final marks finalize
	cout << "Total marks in Finals are : " << ST.Final<<endl;
	ST.Final = (ST.Final / 100) * 50;

	// Getting total of all marks
	ST.total = ST.Final + ST.tm + ST.tq;
	cout <<endl<< "Total Marks Obtain by " << ST.name << " are : " << ST.total<<endl;
	
	// Grading Sceheme

	if (ST.total <= 100 && ST.total >= 90)
		cout << ST.name << " Got A Grade ! ";
	else if (ST.total < 90 && ST.total >= 80)
		cout << ST.name << " Got B Grade ! ";
	else if (ST.total < 80 && ST.total >= 70)
		cout << ST.name << " Got C Grade ! ";
	else if (ST.total < 70 && ST.total >= 60)
		cout << ST.name << " Got D Grade ! ";
	else if (ST.total < 60)
		cout << ST.name << " Got F Grade ! ";
	else
		cout << "Invalid Entry ";

	cout << endl << endl;
	system("pause");
}




