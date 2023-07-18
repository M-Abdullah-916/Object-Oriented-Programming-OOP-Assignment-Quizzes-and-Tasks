#include<iostream>
using namespace std;

class DB;
class DM
{
public:
	DM()
	{
		meters = 0, centi_meters = 0;
	}

	void getter()
	{
		cout << "Enter the value of Distance in Meters : ";
		cin >> meters;
		cout << "Enter the value of Distance in Centi-Meters : ";
		cin >> centi_meters;
	}
	void setter()
	{
		cout << endl << "Distance Enter in Meters is : " << meters << endl;
		cout << "Distance Enter in Centi-Meters is : " << centi_meters << endl;
	}
	friend void Distance_Addition(DM , DB);
private:
	float meters;
	float centi_meters;
};

class DB
{
public:
	DB()
	{
		feet = 0, inches = 0;
	}

	void getter()
	{
		cout << "Enter the value of Distance in Feet : ";
		cin >> feet;
		cout << "Enter the value of Distance in Inches : ";
		cin >> inches;
	}
	void setter()
	{
		cout << endl << "Distance Enter in Feet is : " << feet << endl;
		cout << "Distance Enter in Inches is : " << inches << endl;
	}

	friend void Distance_Addition(DM , DB);
private:
	float feet;
	float inches;
};

int main()
{
	DM M;
	DB B;
	cout << "Enter Distance in Following Terms !!" << endl;
	M.getter();
	B.getter();
	cout << endl << "The Distance you Entered in Different Terms !!" << endl;
	M.setter();
	B.setter();

	cout << endl << "Now Performing Calculations on Expressions !!" << endl;
	Distance_Addition(M,B);

	cout << endl << endl;
	system("pause");
}

void Distance_Addition(DM M, DB B)
{
	float total = 0;
	total = M.meters + M.centi_meters + B.feet + B.inches;
	cout << endl << "Total Distance Becomes ! " << total << " ! after addition " << endl;
	
	// For Calculation, I convert total distance into METERS ( total = Meters) 
	total = (B.feet / 3.3) + (M.centi_meters / 10) + ((B.inches / 0.4) / 10) + M.meters;
	cout << endl;
	cout << endl << "Total Distance in Meters Becomes = " << total;
	cout << endl << "Total Distance in Centi-Meters Becomes = " << total * 10;
	cout << endl << "Total Distance in Feet Becomes = " << total * 3.3;
	cout << endl << "Total Distance in inches Becomes = " << (total * 10) * 0.4;
}