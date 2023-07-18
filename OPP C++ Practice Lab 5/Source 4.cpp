#include <iostream>
using namespace std;

class Rectangle
{
public:
	float length;
	float width;
	Rectangle()
	{
		length = 0; width = 0;
	}

	void getter()
	{
		cout << "Enter the Length of the Rectangle : ";
		cin >> length;
		cout << "Enter the Width of the Rectangle  : ";
		cin >> width;
	}

	void setter()
	{
		cout << endl << "Length of Rectangle is : " << length;
		cout << endl << "Width of Rectangle is  : " << width;
	}

	Rectangle operator+(Rectangle &A)
	{
		Rectangle temp;
		temp.length = length + A.length;
		temp.width = width + A.width;
		return temp;
	}
};

int main()
{
	Rectangle A, B, C;

	cout << "Enter Values For 1st Rectangle !!" << endl;
	A.getter();
	cout << endl <<"Enter Values For 2nd Rectangle !!" << endl;
	B.getter();

	cout << endl << "After Adding both Reactangles, we got a 3rd Rectangle !!" << endl;
	C = A + B;
	C.setter();

	cout << endl << endl;
	system("pause");
}