#include<iostream>
#include<string>
using namespace std;

class Publications
{
public:
	string title;
	float price;

	void getter()
	{
		cout << endl << "Enter the Title of the Publication : ";
		getline(cin, title);
		cout << "Enter the Price of the Publication : ";
		cin >> price;
	}
	void setter()
	{
		cout << endl << "The Title of Publication is : " << title << endl;
		cout << "The Price of the Publication is : " << price << "/-RS" << endl;
	}
};
class Book :public Publications
{
public:
	int page_count;

	void getter()
	{
		cout << endl << "Enter the Title of the Book : ";
		cin >> title;
		cout << "Enter the Price of the Book : ";
		cin >> price;
		cout << "Enter the Page Count of the Book : ";
		cin >> page_count;
	}
	void setter()
	{
		cout << endl << "The Title of Book is : " << title << endl;
		cout << "The Price of the Book is : " << price << "/-RS" << endl;
		cout << "The Page Count of the Book is : " << page_count << endl;
	}
};
class Tape :public Publications
{
public:
	float time_in_mins;

	void getter()
	{
		cout << endl << "Enter the Title of the Tape : ";
		cin >> title;
		cout << "Enter the Price of the Tape : ";
		cin >> price;
		cout << "Enter the Number of Minutes of the Tape : ";
		cin >> time_in_mins;
	}
	void setter()
	{
		cout << endl << "The Title of Tape is : " << title << endl;
		cout << "The Price of the Tape is : " << price <<"/-RS"<< endl;
		cout << "The Number of Minutes of the Tape is : " << time_in_mins << endl;
	}
};

int main()
{
	int a=0, b=0;
	cout << "Enter the Number of Instances you want to make for Books : ";
	cin >> a;
	cout << "Enter the Number of Instances you want to make for Tapes : ";
	cin >> b;

	Book *ptrb = new Book[a];
	Tape *ptrt = new Tape[b];
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "Enter value for " << i + 1 << " Instance of Book : " << endl;
		ptrb[i].getter();
	}                                      // instances creation wirh getter funtion
	cout << endl;
	for (int i = 0; i < b; i++)
	{
		cout << "Enter value for " << i + 1 << " Instance of Tape : " << endl;
		ptrt[i].getter();
	}
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "The Values for " << i + 1 << " Instance of Book is : " << endl;
		ptrb[i].setter();
	}                                      // Value showing by setter function
	cout << endl;
	for (int i = 0; i < b; i++)
	{
		cout << "The Values for " << i + 1 << " Instance of Tape is : " << endl;
		ptrt[i].setter();
	}

	delete[]ptrb;
	delete[]ptrt;
	ptrb = NULL;
	ptrt = NULL;

	cout << endl << endl;
	system("pause");
}