#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int a=0, int b=0)
	{
		length = a, width = b;
	}

	virtual void getdata()
	{
		cout << "(BASE) Enter the Value of Length : ";
		cin >> length;
		cout << "(BASE) Enter the Value of Width  : ";
		cin >> width;
	}

	virtual void area() = 0;

	float length, width;
};

class Square :public Shape
{
public:
	Square():Shape(length,width){}

	void getdata()
	{
		cout << "Enter the Value of Length : ";
		cin >> length;
	}

	void area()
	{
		cout << "Area of Square is : " << length*length << endl;
	}
};

class Rectangle :public Shape
{
public:
	Rectangle() :Shape(length, width) {}

	void getdata()
	{
		cout << "Enter the Value of Length : ";
		cin >> length;
		cout << "Enter the Value of Width  : ";
		cin >> width;
	}

	void area()
	{
		cout << "Area of Rectangle is : " << length * width << endl;
	}
};

class Circle :public Shape
{
public:
	Circle() :Shape(length, width) {}

	void getdata()
	{
		cout << "Enter the Value of Radius  : ";
		cin >> width;
	}

	void area()
	{
		cout << "Area of Circle is : " << 3.14 * (width * width) << endl;
	}
};


int main()
{
	Shape *S, *R, *C;
	Square square;
	Rectangle rectangle;
	Circle circle;

	S = &square;
	R = &rectangle;
	C = &circle;

	cout << "Enter Values For Square !!" << endl;
	S->getdata();
	cout << endl << "Enter Values For Rectangle !!" << endl;
	R->getdata();
	cout << endl << "Enter Values For Circle !!" << endl;
	C->getdata();

	cout << endl;

	S->area();
	R->area();
	C->area();

	cout << endl << endl;
	system("pause");
}