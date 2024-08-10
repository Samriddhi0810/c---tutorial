//program to understand static variable in function.
#include <iostream>
using namespace std;

void demo()
{
	static int lol;
	static int count = 0;   // static variable
	cout << count << " ";

	count++; // value is updated and will be carried to next function calls.
}

int main()
{
	
	for (int i=0; i<5; i++)	
		demo();
	return 0;
}