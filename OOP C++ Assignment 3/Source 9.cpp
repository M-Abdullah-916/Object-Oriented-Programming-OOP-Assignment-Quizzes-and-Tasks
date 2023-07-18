#include <iostream>
#include <string>
using namespace std;

void Reversing_char(char *, char *);
void Reversing_Word(char *, char *, char *);

int main()
{
	char a[] = "Cat Is Running";
	cout << endl << "Original String is : " << a;

	Reversing_Word(a, a, a);

	cout << endl << "Reversed String is : " << a;

	cout << endl << endl;
	system("pause");
}

void Reversing_char(char *a, char *b)
{
	if (a > b)
		return;
	else
	{
		char temp = *a;
		*a = *b;
		*b = temp;
		Reversing_char(a + 1, b - 1);
	}
}
void Reversing_Word(char *a, char *b, char *c)
{
	if (*c == '\0')
	{
		Reversing_char(b, c - 1);
		b = c + 1;
		Reversing_char(a, c - 1);
		return;
	}
	if (*c == ' ')
	{
		Reversing_char(b, c - 1);
		b = c + 1;
	}
	Reversing_Word(a, b, c + 1);
}
