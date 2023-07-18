#include <iostream>
using namespace std;


int main()
{
	cout << "This program will help to make a user-defined 2D array " << endl;
	int **Double = NULL;     
	int *col = NULL;
	int row = 0, column = 0;
	cout <<endl<< "Enter the number of rows : ";
	cin >> row;
	
	col = new int[100];           // to store coloumns according to user
	Double = new int*[row];
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "Enter the number of column for "<<i+1<<" row : ";
		cin >> column;
		col[i] = column;
		for (int j = 0; j < column; j++)
		{
			Double[i] = new int[column];
		}
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << "Enter value of " << i + 1 << " row and " << j + 1 << " coloumn : ";
			cin >> Double[i][j];
		}
		cout << endl;
	}
	cout << "value of 2D Array : " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << Double[i][j] << " ";
		}
		cout << endl;
	}


	delete[]Double;
	Double = NULL;
	delete[]col;
	col = NULL;

	cout << endl << endl;
	system("pause");
}
