#include<iostream>
using namespace std;

class Vector;
class Point
{
public:
	Point()
	{
		x = 0, y - 0, z = 0;
	}

	void getter()
	{
		cout << "Enter the Value of X-Axis for Point : ";
		cin >> x;
		cout << "Enter the Value of Y-Axis for Point : ";
		cin >> y;
		cout << "Enter the Value of Z-Axis for Point : ";
		cin >> z;
	}
	void setter()
	{
		cout << endl << "The Value of X-Axix for Point is : " << x;
		cout << endl << "The Value of Y-Axix for Point is : " << y;
		cout << endl << "The Value of Z-Axix for Point is : " << z;
		cout << endl << "Overall Point Becomes :  (" << x << " , " << y << " , " << z << ")" << endl;
		if (x >= 0 && y >= 0 && z >= 0)
		{
			cout << "Point's Direction is Positive along X , Y , Z axis " << endl;
		}
		else if (x< 0 && y >= 0 && z >= 0)
		{
			cout << "Point's Direction is Positive along Y , Z axis and Negative along X axis " << endl;
		}
		else if (x >= 0 && y < 0 && z >= 0)
		{
			cout << "Point's Direction is Positive along X , Z axis and Negative along Y axis " << endl;
		}
		else if (x >= 0 && y >= 0 && z < 0)
		{
			cout << "Point's Direction is Positive along X , Y axis and Negative along Z axis " << endl;
		}
	}
	void friend New_Position(Point, Vector);

private:
	float x,y,z;

};

class Vector
{
public:
	Vector()
	{
		X = 0, Y = 0, Z = 0;
	}

	void getter()
	{
		cout << "Enter the Value of X-Axis for Vector : ";
		cin >> X;
		cout << "Enter the Value of Y-Axis for Vector : ";
		cin >> Y;
		cout << "Enter the Value of Z-Axis for Vector : ";
		cin >> Z;
	}
	void setter()
	{
		cout << endl << "The Value of X-Axix for Vector is : " << X;
		cout << endl << "The Value of Y-Axix for Vector is : " << Y;
		cout << endl << "The Value of Z-Axix for Vector is : " << Z;
		cout << endl << "Overall Vector Becomes :  (" << X << " , " << Y << " , " << Z << ")" << endl;
		if (X >= 0 && Y >= 0 && Z >= 0)
		{
			cout << "Vector's Direction is Positive along X , Y , Z axis " << endl;
		}
		else if (X< 0 && Y >= 0 && Z >= 0)
		{
			cout << "Vector's Direction is Positive along Y , Z axis and Negative along X axis " << endl;
		}
		else if (X>= 0 && Y < 0 && Z >= 0)
		{
			cout << "Vector's Direction is Positive along X , Z axis and Negative along Y axis " << endl;
		}
		else if (X>= 0 && Y >= 0 && Z < 0)
		{
			cout << "Vector's Direction is Positive along X , Y axis and Negative along Z axis " << endl;
		}

	}
	void friend New_Position(Point, Vector);

private:
	float X, Y, Z;
};



int main()
{
	Point P;
	Vector V;

	cout << "Inputting Values for Point !!!" << endl;
	P.getter();
	cout << endl << "Inputting Values for Vector !!!" << endl;
	V.getter();
	
	cout << endl;

	cout << "Outputting Values for Point !!!" << endl;
	P.setter();
	cout << endl << "Outputting Values for Vector !!!" << endl;
	V.setter();

	cout << endl << "After Adding Point and Vector, New Position Becomes !!!" << endl;
	New_Position(P, V);


	cout << endl << endl;
	system("pause");
}

void New_Position(Point P, Vector V)
{
	float a=0,b=0,c=0;
	a = P.x + V.X;
	b = P.y + V.Y;
	c = P.z + V.Z;
	

	cout << endl << "The Value of X-Axix for New Position is : " << a;
	cout << endl << "The Value of Y-Axix for New Position is : " << b;
	cout << endl << "The Value of Z-Axix for New Position is : " << c;
	cout << endl << "Overall New Position Becomes :  (" << a << " , " << b << " , " << c << ")" << endl;

	if (a >= 0 && b >= 0 && c >= 0)
	{
		cout << "New Position's Direction is Positive along X , Y , Z axis " << endl;
	}
	else if (a < 0 && b >= 0 && c >= 0)
	{
		cout << "New Position's Direction is Positive along Y , Z axis and Negative along X axis " << endl;
	}
	else if (a >= 0 && b < 0 && c >= 0)
	{
		cout << "New Position's Direction is Positive along X , Z axis and Negative along Y axis " << endl;
	}
	else if (a >= 0 && b >= 0 && c < 0)
	{
		cout << "New Position's Direction is Positive along X , Y axis and Negative along Z axis " << endl;
	}
}