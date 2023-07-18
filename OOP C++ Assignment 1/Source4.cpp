#include <iostream>
using namespace std;

int stats(int *ptr, int x);
int main()
{
	cout << "This Program will tell about the mode from the values !" << endl << endl;
	
	int array[20], integer =0, a;

	cout << "Enter the values into array : " << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> array[i];
	}
	a = stats(array, integer);

	if (a == -1)
		cout << "No Mode from the values !";
	else
		cout << a << " is the mode from the values !";
		

	cout << endl << endl;
	system("pause");
}

int stats(int *ptr, int x)
{
	int temp = 1,max=0;
	x = ptr[0];
	for (int i = 0; i < 10; i++)
	{
		if (ptr[i] == ptr[i + 1])   // array index equals to array second index
		{
			temp++;
			if (max < temp)
			{
				max = temp;
				x = ptr[i];
			}
		}
	}

	if (temp == 1) 
		return -1;
	else
		return x;

}


