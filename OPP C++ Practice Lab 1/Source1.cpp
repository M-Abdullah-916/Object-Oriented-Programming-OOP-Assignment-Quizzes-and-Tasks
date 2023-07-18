#include <iostream>
using namespace std;

int main()
{
	cout << "This program will help to take input form the user and sum it then will display " << endl;

	int *Array = NULL;
	int size,sum=0;

	cout <<endl<< "Enter the Number of the Students : ";
	cin >> size;
	Array = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout  << "The marks of student " << i + 1 << " is : ";
		cin >> *(Array + i);
		sum = sum + *(Array + i);
	}

	
	cout <<endl<< "Total marks of the students are : "<<sum<<endl;


	cout << endl << endl;
	system("pause");
}