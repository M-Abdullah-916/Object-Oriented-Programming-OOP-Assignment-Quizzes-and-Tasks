#include <iostream>
#include <string>
using namespace std;

void Permutation(string, int, int);

int main()
{
	string ptr;
	cout << "Enter the string for Permutation : ";
	cin >> ptr;

	cout << "Following are the possible Permutations  " << endl;
	Permutation(ptr, 0, ptr.size() - 1);

	cout << endl << endl;
	system("pause");
}

void Permutation(string a, int b, int c)
{
	if (b == c)
		cout << endl << "Permutaion is : "<< a ;
	else
	{
		for (int i = b; i <= c; i++)
		{
			swap(a[b], a[i]);
			Permutation(a, b + 1, c);
			swap(a[b], a[i]);
		}
	}
}
