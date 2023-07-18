#include <iostream>
#include "Vending_Machine.h"

using namespace std;

int main()
{
	int Total=0,money=0, opt=0;
	Vending_Machine *obj;
	obj = new Vending_Machine[4];
	for (int i = 0; i < 4; i++)
	{
		obj[i].number_of_drinks = 20;
	}
	while (opt != 5)
	{
		cout << "\t!! Welcome to the Vending Machine !!" << endl;
		cout << endl << "\tDrink Name\tDrink Cost\tNumber of Drinks";
		cout << endl << "\tCoca Cola \t75       \t" << obj[0].number_of_drinks;
		cout << endl << "\tRoot Beer \t75      \t" << obj[1].number_of_drinks;
		cout << endl << "\tGrape Soda\t80      \t" << obj[2].number_of_drinks;
		cout << endl << "\tCream Soda\t80      \t" << obj[3].number_of_drinks;
		cout << endl << "Enter your choice 1-4 to choose the drink or press 5 to exit ";
		cout << endl << "Option Choosed : ";
		cin >> opt;
	
		switch (opt)
		{
		case 1:
			obj[0].drink_cost = 75;
			cout << endl << "You have choosed Coca Cola !" << endl;
			cout << "Enter the amount to purchase Coca Cola : ";
			cin >> money;
			if (money > -1 && money <= 100)
			{
				if (money > obj[0].drink_cost)
				{
					Total = Total + obj[0].drink_cost;
					--obj[0].number_of_drinks;
					cout << "You can pick up your drink from below and your change is : " << money - obj[0].drink_cost;
				}
				else
					cout << "Sorry, But your Money is less than the required amount " << endl;
			}
			else
				cout << "Entered amount should be between 0 to 100 " << endl;
			break;
		case 2:
			obj[1].drink_cost = 75;
			cout << endl << "You have choosed Root Beer !" << endl;
			cout << "Enter the amount to purchase Root Beer : ";
			cin >> money;
			if (money > -1 && money <= 100)
			{
				if (money > obj[1].drink_cost)
				{
					Total = Total + obj[1].drink_cost;
					--obj[1].number_of_drinks;
					cout << "You can pick up your drink from below and your change is : " << money - obj[1].drink_cost;
				}
				else
					cout << "Sorry, But your Money is less than the required amount " << endl;
			}
			else
				cout << "Entered amount should be between 0 to 100 " << endl;
			
			break;
		case 3:
			obj[2].drink_cost = 80;
			cout << endl << "You have choosed Grape Soda !" << endl;
			cout << "Enter the amount to purchase Grape Soda : ";
			cin >> money;
			if (money > -1 && money <= 100)
			{
				if (money > obj[2].drink_cost)
				{
					Total = Total + obj[2].drink_cost;
					--obj[2].number_of_drinks;
					cout << "You can pick up your drink from below and your change is : " << money - obj[2].drink_cost;
				}
				else
					cout << "Sorry, But your Money is less than the required amount " << endl;
			}
			else
				cout << "Entered amount should be between 0 to 100 " << endl;
			
			break;
		case 4:
			obj[3].drink_cost = 80;
			cout << endl << "You have choosed Cream Soda !" << endl;
			cout << "Enter the amount to purchase Cream Soda : ";
			cin >> money;
			if (money > -1 && money <= 100)
			{
				if (money > obj[3].drink_cost)
				{
					Total = Total + obj[3].drink_cost;
					--obj[3].number_of_drinks;
					cout << "You can pick up your drink from below and your change is : " << money - obj[3].drink_cost;
				}
				else
					cout << "Sorry, But your Money is less than the required amount " << endl;
			}
			else
				cout << "Entered amount should be between 0 to 100 " << endl;
			
			break;
		case 5:
			cout << "You have exited from the Vending Machine, Thanks for your presence !";
			break;
		default:
			cout << "Wrong Entry !!!" << endl;
			break;
		}
		cout << endl << endl << "Want to Try Again ? Than press 1 or if you want to Exit than press 5 to exit : ";
		cin >> opt;
		system("cls");
	}
	cout << "Total Money Earned by Vending MAchine is : " << Total;

	delete[]obj;
	obj = NULL;
	cout << endl << endl;
	system("pause");
}
