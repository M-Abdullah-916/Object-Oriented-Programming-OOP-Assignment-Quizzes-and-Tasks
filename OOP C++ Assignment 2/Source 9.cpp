#include <iostream>
using namespace std;

class TollBooth
{
public:
	TollBooth()
	{
		no_of_vehicle = 0, Total_amount = 0;
	}
	void amount(int a,int b,int c)
	{
		cout << endl << "Total amount collected from car is : " << a;
		cout << endl << "Total amount collected from hiace is : " << b;
		cout << endl << "Total amount collected from bus is : " << c;
		Total_amount = a+b+c;
		cout << endl<<"Total amount collected is : " << Total_amount;
	}
	void vehicle(int a, int b)
	{
		cout <<endl<< "Total Number of vehicles which were paid are : " << a;
		cout << endl << "Total Number of vehicles which were non-paid are : " << b;
		no_of_vehicle = a + b;
		cout << endl << "Total Number of vehicles are : " << no_of_vehicle;
	}
	void display()
	{
		
	}

private:
	int no_of_vehicle;
	int Total_amount;
};

int main()
{
	int p=0,n=0;
	char a;
	TollBooth obj;
	cout << "Press P for paying vehicles and N for non paying vehicles " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Vehcile " << i + 1 << " is : ";
		cin >> a;
		if (a == 'p' || a == 'P')
			p++;
		else if (a == 'n' || a == 'N')
			n++;
		else
			cout << "Invalid Entry for vehicle " << i + 1 << " !";
	}
	cout << endl;
	cout << "Amount for paying vehicles : " << endl;
	cout << "Press 1 for car " << endl;
	cout << "Press 2 for hiace " << endl;
	cout << "Press 3 for bus " << endl;
	int opt,car=0,bus=0,hiace=0;
	for (int i = 0; i < p; i++)
	{
		cout << "Option choosed : ";
		cin >> opt;
		if (opt == 1)
		{
			car++;
		}
		if (opt == 2)
		{
			hiace++;
		}
		if (opt == 3)
		{
			bus++;
		}
	}
	car = car * 20;
	hiace = hiace * 50;
	bus = bus * 100;
	obj.amount(car, hiace, bus);
	cout << endl;
	obj.vehicle(p, n);
	


	cout << endl << endl;
	system("pause");
}