#include <iostream>
using namespace std;

class Rational_Number
{
public:
	float numenator;
	float denomenator;
	Rational_Number()
	{
		numenator = 0, denomenator = 0;
	}

	void get_data()
	{
		cout << "Enter the value of Numenator : ";
		cin >> numenator;
		cout << "Enter the value of Denomenator : ";
		cin >> denomenator;
	}
	void show_data()
	{
		cout << endl <<"Value of Numenator is : " << numenator << endl;
		cout << "Value of Denomenator is : " << denomenator << endl;
	}
	void add_data(Rational_Number A,Rational_Number B) 
	{
		cout << endl << "Sum of Numenator of both Rational Number is " << A.numenator + B.numenator;
		cout << endl << "Sum of Denomenator of both Rational Number is " << A.denomenator + B.denomenator << endl;
	}
	void operator + (Rational_Number &A)
	{
		float N, D;
		N = numenator + A.numenator;
		D = denomenator + A.denomenator;
		cout << endl << "Numenator = " << N << endl;
		cout << "Denomenator = " << D << endl;
		cout << "Overall Sum after Solving = " << (numenator / denomenator) + (A.numenator / A.denomenator);
	}
};

int main()
{
	Rational_Number A, B;

	cout << "Enter the values for 1st Rational Number " << endl;
	A.get_data();
	cout << endl << "Enter the values for 2nd Rational Number " << endl;
	B.get_data();

	cout << endl << "The values for 1st Rational Number !! " << endl;
	A.show_data();
	cout << endl << "The values for 2nd Rational Number !! " << endl;
	B.show_data();

	cout << endl << "Addition of Data of both Rational Numbers !!" << endl;
	A.add_data(A, B);

	cout << endl <<"Addition of Rational Numbers via Operator Overloading !!" << endl;
	A + B;


	cout << endl << endl;
	system("pause");
}