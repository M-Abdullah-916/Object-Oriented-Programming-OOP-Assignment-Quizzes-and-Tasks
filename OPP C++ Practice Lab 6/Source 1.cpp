#include <iostream>
using namespace std;

class Arthematic
{
public:
	Arthematic(int a=0,int b=0)
	{
		num1 = a, num2 = b;
	}

	virtual void setdata()
	{
		cout << "(From Base) Enter the Value of 1st Number : ";
		cin >> num1;
		cout << "(From Base) Enter the value of 2nd Number : ";
		cin >> num2;
	}

	float num1, num2;
};

class Add :public Arthematic
{
public:
	Add() :Arthematic(num1, num2){}

	void op()
	{
		cout << "Addition of both Number is : " << num1 + num2 << endl;
	}

	void setdata()
	{
		cout << "(From Derived) Enter the Value of 1st Number : ";
		cin >> num1;
		cout << "(From Derived) Enter the value of 2nd Number : ";
		cin >> num2;
	}
};

class Subtract :public Arthematic
{
public:
	Subtract() :Arthematic(num1, num2) {}

	void op()
	{
		cout << "Subtraction of both Number is : " << num1 - num2 << endl;
	}

	void setdata()
	{
		cout << "(From Derived) Enter the Value of 1st Number : ";
		cin >> num1;
		cout << "(From Derived) Enter the value of 2nd Number : ";
		cin >> num2;
	}
};

int main()
{
	Arthematic *A, *S;
	Add add;
	Subtract subtract;

	A = &add;
	S = &subtract;

	cout << "Enter Numbers for Addition !!" << endl;
	A->setdata();
	cout << endl;
	cout << "Enter Numbers for Subtraction !!" << endl;
	S->setdata();

	cout << endl;

	add.op();
	subtract.op();


	cout << endl << endl;
	system("pause");
}