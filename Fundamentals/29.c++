//program to understand Bitwise operators.
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=3;
    cout<<(a&b)<<" "<<(a|b)<<" "<<(a^b)<<endl;
    cout<<(a>>2)<<" "<<(a<<2)<<endl;
    cout<<(~a)<<endl;

    return 0;
}