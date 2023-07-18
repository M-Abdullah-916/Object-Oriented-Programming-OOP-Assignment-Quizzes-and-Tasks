#include <iostream>
using namespace std;

float sumup(float &x, float &y, float &z);
int main()
{
	cout << "This Program will tell about the price of pastries !" << endl<<endl;
	float x = 1.0, y = 2.0, z = 0.0;
	cout << "Enter the price of pastry : ";
	cin >> x;
	cout << "Enter the amount of pastry you want to buy : ";
	cin >> y;
	cout<<"Total value of pastaries = "<<sumup(x, y, z);

	cout << endl << endl;
	system("pause");
}
float sumup(float &x, float &y, float &z)
{
	z = x*y;
	return z;
}



