//Program to understand  working of break statement.
#include<iostream>
using namespace std;
int main()
{
	// loop initialization expression
	int i = 1;

	// infinite while loop
	while (1) {
		if (i > 10)
			break;

		cout << i << " ";
		i++;
	}

	return 0;
}


