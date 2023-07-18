#include <iostream>
using namespace std;

class Counter
{
public:
	int in, out;
	Counter()
	{
		in = 0, out = 0;
	}

	void operator++()
	{
		++in;
	}
	void operator--(int)
	{
		out--;
	}
	void display()
	{
		cout << endl << "Total Persons that Entered the Bank are = " << in;
		cout << endl << "Total Persons that Left the Bank are = " << out;
	}

private:

};

int main()
{
	Counter A;
	int opt = 0;
	while (opt != 3)
	{
		system("cls");
		cout << "Press 1 if you want to Enter the Bank " << endl;
		cout << "Press 2 if you want to Exit the Bank " << endl;
		cout << "Press 3 if you want to Exit the Program " << endl;
		cout << endl << "Option chosed : ";
		cin >> opt;

		switch (opt)
		{
		case 1:
		{
			++A.in;
			cout << "Welcome to the Bank !" << endl << endl;
			system("pause");
			break;
		}
		case 2:
		{
			A.out--;
			cout << "Good Bye! Have a Nice Day !" << endl << endl;
			system("pause");
			break;
		}
		case 3:
		{
			opt = 3;
			break;
		}

		}
	}
	cout << endl << "Total Persons Information !!" << endl;
	A.display();

	cout << endl << endl;
	system("pause");
}