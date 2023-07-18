#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix()
	{
		mat[2][2] = 0;
	}

	void get_data()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " coloumn : ";
				cin >> mat[i][j];
			}
			cout << endl;
		}
	}

	void determinent()
	{
		cout << endl << "Determinent of the Entered Matrix !! "<<endl;
		double temp;
		temp = mat[0][0];
		mat[0][0] = mat[1][1];
		mat[1][1] = temp;
		mat[0][1] = mat[0][1] * -1;
		mat[1][0] = mat[1][0] * -1;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << " \t " << mat[i][j] << "   ";
			}
			cout << endl;
		}
	}
	;
	void operator+(Matrix &A)
	{
		double temp[2][2];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				temp[i][j] = mat[i][j] + A.mat[i][j];
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "\t" << temp[i][j] << "  " ;
			}
			cout << endl;
		}
	}

private:
	double mat[2][2];
};

int main()
{
	Matrix A, B;

	cout << "Entering Value For 1st Matrix !! " << endl;
	A.get_data();
	cout << endl << "Entering Value For 2nd Matrix !!" << endl;
	B.get_data();

	cout << endl << "Additio of 1st and 2nd Matrix !! " << endl;
	A + B;

	cout << endl << "Taking Determinent of 1st Matrix !!" << endl;
	A.determinent();
	cout << endl << "Taking Determinent of 2nd Matrix !!" << endl;
	B.determinent();

	cout << endl << endl;
	system("pause");
}