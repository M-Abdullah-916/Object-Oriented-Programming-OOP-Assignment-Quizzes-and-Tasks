#include <iostream>
using namespace std;

class Example
{
public:
	Example(int y = 10) :data(y)
	{

	}
	int getIncrementedData()        // removing const from here
	{                                           // if function is constant than we cannot increment in it.
		return ++data;
	}
	static void getCount()
	{
		cout << "Count is " << count << endl;
	}
	     // without any return type  
	     // initiallising it outside the class
		// static function can only access static variable but here data is not static
        // putting count here rather than data;
private:
	int data;
	static int count;
};
int Example::count = 5;


int main()
{
	Example E(13);
	E.getIncrementedData();
	cout << endl;
	E.getCount();



	cout << endl << endl;
	system("pause");
}