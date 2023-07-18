#include <iostream>
using namespace std;

class Account
{
public:
	Account()             // constructor if parameter is not passed
	{
		balance = 0;
	}
	Account(int a)        // construtor if parameter is passed
	{
		balance = a;
	}


	int balance;
	void withdraw(int a)       // withdrawing money
	{
		if (balance >= a)
		{
			cout << endl << "Your current balance is : " << balance;
			balance = balance - a;
			cout << endl << "After withdrawing money, you balance remains : " << balance;
		}
		else
			cout << "Your current balance is less than withdrawing money, access denied !";
	}

	void add(int a)           // adding the money
	{
		cout << endl << "Your current balance is : " << balance;
		balance = balance + a;
		cout << endl << "After adding money, your balance becomes : " << balance;
	}

	void CB()           // current balance
	{
		cout << "Your current balance is : " << balance;
	}
};

int main()
{
	int a;
	
	cout << "Enter the amount of balance you want : ";
	cin >> a;
	Account obj1(a);
	cout << endl;
	
	int opt;              // using switch case
	cout << endl << "Press 1 to see your current balance ";
	cout << endl << "Press 2 to add money to your current balance ";
	cout << endl << "Press 3 to withdraw your money ";
	cout << endl << "Opton used : ";
	cin >> opt;

	switch (opt)
	{
	case 1:
	{
		obj1.CB();
		break;
	}
	case 2:
	{
		cout << "Enter the amount you want to add : ";
		cin >> a;
		obj1.add(a);
		break;
	}
	case 3:
	{
		cout << "Enter the amount you want to withdraw : ";
		cin >> a;
		obj1.withdraw(a);
		break;
	}
	default:
		cout << "Invalid Entry!";
	}


	cout << endl << endl;
	system("pause");
}