#include <iostream>
using namespace std;

class Car
{
public:
	Car()
	{
		a = 0;
	}
	Car(const Car &obj)        //deep copy
	{
		a = obj.a;
		ptr = new int;
		cout << endl << "Value of pointer is : " << *ptr;
	}
	void info()                // inputting value
	{
		cout << "Enter value of variable : ";
		cin >> a;
		cout << "Enter value of Pointer : ";
		ptr = new int;
		cin >> *ptr;
	}
	void data()
	{
		cout << endl<<"Value of variable is : " << a;
		cout << endl << "Value of pointer is : " << *ptr;
	}
	void Delete()
	{
		delete ptr;
		ptr = NULL;
	}
	int a,*ptr;
};

int main()
{
	Car obj1;
	cout << "1st obj has been created"<<endl;
	obj1.info();
	obj1.data();
	cout << endl;
	Car obj2(obj1);
	cout <<endl<< "2nd obj has been created" << endl;
	obj1.Delete();
	
	cout << endl << "Value of 2nd obj !" << endl;
	obj2.data();

	

	cout << endl << endl;
	system("pause");
}