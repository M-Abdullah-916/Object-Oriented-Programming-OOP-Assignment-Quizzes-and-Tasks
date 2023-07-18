#include <iostream>
using namespace std;

class Rectangle
{
public:
	float length;
	float width;
	float area;
	Rectangle()
	{
		length = 0 , width = 0 , area =0;
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

	void Area()
	{
		area = length*width;
		cout << "Area of Rectangle is : " << area << endl;
	}

	Rectangle operator+(Rectangle &A)
	{
		Rectangle temp;
		temp.length = length + A.length;
		temp.width = width + A.width;
		return temp;
	}
	bool operator<(Rectangle &A)
	{
		return area < A.area;
	}
};

int main()
{
	Rectangle A, B, C;

	cout << "Enter Values For 1st Rectangle !!" << endl;
	A.getter();
	cout << endl <<"Enter Values For 2nd Rectangle !!" << endl;
	B.getter();

	cout << endl << "Area of 1st Rectangle !!" << endl;
	A.Area();
	cout << endl << "Area of 2nd Rectangle !!" << endl;
	B.Area();

	if (A < B)
		cout << endl << "2nd Rectangle is Greater " << endl;
	else if (B < A)
		cout << endl << "1st Rectangle is Greater " << endl;
	else
		cout << endl << "Both Rectangles are Equal " << endl;

	cout << endl << "After Adding both Reactangles, we got a 3rd Rectangle !!" << endl;
	C = A + B;
	C.setter();

	cout << endl << endl;
	system("pause");
}