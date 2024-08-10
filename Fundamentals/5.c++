//program to understand the use of 'extern' keyword.
/*when you want to  access a global variable which is initialized below and declared below,you 
may use 'extern' keywords-extern stands for external linkage*/
#include<iostream>
using std::cout;
extern int n;
int main()
{
cout<<n;
return 0;
}
int n=10;