#include <iostream>
using namespace std;


int main()
{	cout << "This program will help to initialize 3D array by using triple pointer " << endl;
	int ***ptr = NULL;
	
	int row = 0, col = 0, height = 0;
	 
	cout <<endl<< "Enter the value of rows : ";
	cin >> row;
	cout << "Enter the value of column : ";
	cin >> col;
	cout << "Enter the value of height : ";
	cin >> height;
	ptr = new int**[row];
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		ptr[i]= new int*[col];
		for (int j = 0; j < col; j++)
		{
			ptr[i][j] = new int[height];
		}
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < height; k++)
			{
				cout << "Enter the value of " << i + 1 << " row, " << j + 1 << " column and " << k + 1 << " height : ";
				cin >> ptr[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl << "The value of 3D array is : "<<endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < height; k++)
			{
				cout << ptr[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

	delete []ptr;
	ptr = NULL;

	cout << endl << endl;
	system("pause");
}
