#include <iostream>
#include<string>
using namespace std;

// Initiallisation of classes
class Mobile;

class Screen
{
public:
	Screen()
	{
		length = 0, width = 0, height = 0;
	}
	friend Mobile;
private:
	float length;
	float width;
	float height;
};
class Colour
{
public:
	Colour()
	{
		mobile_colour = "NULL";
	}

	friend Mobile;
private:
	string mobile_colour;
};

class Mobile
{
public:
	static int count;
	void getter(Screen &OS, Colour &OC)
	{
		cout << "Enter the Length of Mobile : ";
		cin >> OS.length;
		cout << "Enter the Width of Mobile : ";
		cin >> OS.width;
		cout << "Enter the Height of Mobile : ";
		cin >> OS.height;
		cout << "Enter the Colour of Mobile : ";
		cin >> OC.mobile_colour;
		++count;
	}
	void setter(Screen &OS, Colour &OC)
	{
		cout << "The Length of Mobile is : " << OS.length << endl;
		cout << "The Width of Mobile is  : " << OS.width << endl;
		cout << "The Height of Mobile is : " << OS.height << endl;
		cout << "The Colour of Mobile is : " << OC.mobile_colour << endl;
	}
};
int Mobile::count = 0;
int main()
{
	int opt;
	cout << "Enter the Number of Mobiles you want to consider : ";
	cin >> opt;
	Mobile *M = new Mobile[opt];
	Screen *S = new Screen[opt];
	Colour *C = new Colour[opt];

	cout << endl;

	for (int i = 0; i < opt; i++)
	{
		cout << "Enter the Values for !! " << i + 1 << " !! Mobile ! " << endl;
		M[i].getter(S[i], C[i]);
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < opt; i++)
	{
		cout << "The Values for !! " << i + 1 << " !! Mobile is : " << endl;
		M[i].setter(S[i], C[i]);
		cout << endl;
	}

	cout << "Total Number of iterations for the Mobile Function is : " << M[opt].count;

	delete[]M;
	M = NULL;
	delete[]S;
	S = NULL;
	delete[]C;
	C = NULL;

	cout << endl << endl;
	system("pause");
}