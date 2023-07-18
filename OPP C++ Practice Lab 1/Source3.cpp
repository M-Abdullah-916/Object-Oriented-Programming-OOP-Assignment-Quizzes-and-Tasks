#include <iostream>
using namespace std;

int main()
{
	cout << "This program will help to take input form the user and shows the maximum number " << endl;

	int *Array = NULL;
	int *MAX1=NULL;
	int size;

	cout <<endl<< "Enter the Number of the Students : ";
	cin >> size;
	Array = new int[size];
	cout << endl;
	MAX1 = Array;
	for (int i = 0; i < size; i++)
	{
		cout  << "The marks of student " << i + 1 << " is : ";
		cin >> *(Array + i);
		if (*MAX1 <= *(Array + i))
		{
			MAX1 = (Array + i);
		}
	}

	cout << "Maximum number from the given numbers of students is : "<<*MAX1 ;

	delete []Array;
	cout << endl << endl;
	system("pause");
}