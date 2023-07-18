#include <iostream>
using namespace std;

class Point
{
public:
	Point() :x(0), y(0),opt(0)  //Constructor
	{};

	void getvalues()
	{
		cout << "Enter the Number of Dimensions you want to calcute\n(NOTE:Only 2,3,4 and 5 Dimesions can be Entered) : ";
		cin >> opt;
		if (opt >= 2 && opt <= 5)
		{
			for (int i = 0; i < opt; i++)
			{
				cout << "Emter the value for " << i + 1 << " Dimesion : ";
				cin >> ptr[i];
			}
			cout << endl;
		}
		else
			cout << endl << "Invalid Entry, You have to choose Dimesions from 2 to 5 only !!! " << endl;
	};

	void compute_distance()
	{
		if (opt >= 2 && opt <= 5)
		{
			if (opt == 2)
			{
				cout << "Distance B/W Dimensions is : " << ptr[0] - ptr[1];
			}
			else if (opt == 3)
			{
				cout << "Distance B/W Dimensions is : " << ptr[0] - ptr[1] - ptr[2];
			}
			else if (opt == 4)
			{
				cout << "Distance B/W Dimensions is : " << ptr[0] - ptr[1] - ptr[2] - ptr[3];
			}
			else if (opt == 5)
			{
				cout << "Distance B/W Dimensions is : " << ptr[0] - ptr[1] - ptr[2] - ptr[3] - ptr[4];
			}
			else
				cout << "INVALID ENTRIES !!! " << endl;
		}
		else
			cout << "INVLAID ENTRIES !!! " << endl;

	};

	~Point()        //Destructor
	{
		delete[]ptr;
		ptr = NULL;

	}

	float *ptr = new float[5];
	float x, y,opt;

};

int main()
{
	Point Obj;
	Obj.getvalues();
	cout << endl;
	Obj.compute_distance();

	//Obj.~Point;
	cout << endl << endl;
	system("pause");
}
