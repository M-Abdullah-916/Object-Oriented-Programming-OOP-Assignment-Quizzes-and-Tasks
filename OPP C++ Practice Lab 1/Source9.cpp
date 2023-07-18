#include <iostream>
using namespace std;


int main()
{	cout << "This program will help to initialize 2D array by using single pointer " << endl;
	int *ptr = NULL;
	
	int row = 0, col = 0;
	cout <<endl<< "Enter the value of rows : ";
	cin >> row;
	cout << "Enter the value of column : ";
	cin >> col;
	ptr = new int[row*col];
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column : ";
			cin >> *(ptr + (i*col) + j);
		}
		cout << endl;
	}
	cout << endl << "The value of 2D array is : "<<endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << *(ptr + (i*col) + j)<<" ";
		}
		cout << endl;
	}

	delete []ptr;
	ptr = NULL;

	cout << endl << endl;
	system("pause");
}
