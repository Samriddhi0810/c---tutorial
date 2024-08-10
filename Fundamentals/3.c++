//Program to understand initialization and declaration of a local and global variable.
#include <iostream>
using std::cout;
int y; //global variable is declared without initialization.
int main()
{
    int x; //local variable is declared without initialization. 
    cout<<x; //hence output will be random or some garbage value.
    cout<<y; //In this case the variable will be automatically initialized by'0'.
        return 0;
}
