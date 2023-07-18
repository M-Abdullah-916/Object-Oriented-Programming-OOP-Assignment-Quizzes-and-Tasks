#include <iostream>
using namespace std;

void perfect(int x);
int main()
{
	cout << "This Program will tell about the perfect number from 1 to 1000 !" << endl<<endl;

	// calling the function
	for(int i=1;i<=1000;i++)
	perfect(i);

	cout << endl << endl;
	system("pause");
}
void perfect(int x)
{
	int total = 0;
	for (int i = 1; i < x; i++)
	{
		if (x%i == 0)
		{
			total = total + i;
		}
	}
	if (total == x)
		cout << x << " is a perfect number." << endl;
}


