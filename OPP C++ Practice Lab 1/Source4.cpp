#include <iostream>
using namespace std;


int main()
{
	cout << "This program will help to make a user-defined array " << endl;
	int **Double = NULL;
	int row = 0, column = 0;
	cout << "Enter the number of rows : ";
	cin >> row;
	cout << "Enter the number of column : ";
	cin >> column;

	Double = new int*[row];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			Double[i] = new int[column];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Enter value of " << i + 1 << " row and " << j + 1 << " coloumn : ";
			cin >> Double[i][j];
		}
		cout << endl;
	}
	cout << "value of 2D Array : " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << Double[i][j]<<" ";
		}
		cout << endl;
	}


	delete[]Double;
	Double = NULL;

	cout << endl << endl;
	system("pause");
}