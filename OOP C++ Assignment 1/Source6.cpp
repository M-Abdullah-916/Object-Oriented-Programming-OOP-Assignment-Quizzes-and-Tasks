#include <iostream>
using namespace std;


int main()
{
	cout << "This program will help to make a user-defined array " << endl;
	int **Double1 = NULL;
	int **Double2 = NULL;
	int **Double3 = NULL;

	int row1 = 0, column1 = 0,row2 = 0,column2 = 0;

	cout << "Enter the number of rows of matrix 1 : ";
	cin >> row1;
	cout << "Enter the number of columns of matrix 1 : ";
	cin >> column1;

	cout <<endl<< "Enter the number of rows of matrix 2 : ";
	cin >> row2;
	cout << "Enter the number of columns of matrix 2 : ";
	cin >> column2;

	Double1 = new int*[row1];    // 1st matrix formation
	cout <<endl<< "Inputing Matrix 1 Values : " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			Double1[i] = new int[column1];
		}
	}
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			cout << "Enter value of " << i + 1 << " row and " << j + 1 << " coloumn : ";
			cin >> Double1[i][j];
		}
		cout << endl;
	}

	Double2 = new int*[row2];       // 2nd matrix formation
	cout <<endl<< "Inputing Matrix 2 Values : " << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			Double2[i] = new int[column2];
		}
	}
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cout << "Enter value of " << i + 1 << " row and " << j + 1 << " coloumn : ";
			cin >> Double2[i][j];
		}
		cout << endl;
	}
	Double3 = new int*[row1];    // 3rd matrix formation
	
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			Double3[i] = new int[column1];
		}
	}

	cout << "Value of Matrix 1 : " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1; j++)
		{
			cout << Double1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Value of Matrix 2 : " << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cout << Double2[i][j] << " ";
		}
		cout << endl;
	}
	int opt;
	cout << endl << "Press 1 to Add both of the matrixes " << endl;
	cout << "Press 2 to Subtract both of the matrixes " << endl;
	cout << "Press 3 to Multiply both of the matrixes " << endl;
	cout << "Option choosed : ";
	cin >> opt;
	cout << endl;
	switch (opt)
	{
	case 1:
	{
		cout << "Addition of both Matrixes : " << endl;
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				Double3[i][j] = Double1[i][j] + Double2[i][j];
			}
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				cout << Double3[i][j]<<" ";
			}
			cout << endl;
		}
		break;
	}
	case 2:
	{
		cout << "Subtraction of both Matrixes : " << endl;
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				Double3[i][j] = Double1[i][j] - Double2[i][j];
			}
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				cout << Double3[i][j]<<" ";
			}
			cout << endl;
		}
		break;
	}
	case 3:
	{
		cout << "Multiplication of both Matrixes : " << endl;
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				Double3[i][j] = Double1[i][j] * Double2[i][j];
			}
		}
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < column1; j++)
			{
				cout << Double3[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	default:
		cout << "Invalid Entry, Try Again !";
	}

	delete[]Double1;          // De-allocating Pointers
	Double1 = NULL;
	delete[]Double2;
	Double2 = NULL;
	delete[]Double3;
	Double3 = NULL;

	cout << endl << endl;
	system("pause");
}
