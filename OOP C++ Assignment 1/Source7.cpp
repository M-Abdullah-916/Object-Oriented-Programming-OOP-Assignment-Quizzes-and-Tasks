#include <iostream>
using namespace std;


int main()
{
	cout << "This program will make 3D array of 4*5*10 and de-allocate it !" << endl;
	int ***ptr = NULL;
	
	ptr = new int**[4];
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		ptr[i] = new int*[5];
		for (int j = 0; j < 5; j++)
		{
			ptr[i][j] = new int[10];
		}
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << "Enter the value of " << i + 1 << " row, " << j + 1 << " column and " << k + 1 << " height : ";
				cin >> ptr[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl << "The value of 3D array is : " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << ptr[i][j][k]<<" ";
			}
			cout << endl;
		}
		cout << endl;
	}

	delete[]ptr;
	ptr = NULL;

	cout << endl << endl;
	system("pause");
}
