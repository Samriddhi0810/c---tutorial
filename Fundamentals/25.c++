//program to understand assignment operators(=,short-hand operator)
#include<iostream>
using namespace std;
int main()
{
    int x,z,u=10 /*works*/,y;
    y=x; //simple assignment op.
    cout<<y<<"\n";

    x+=10;
    cout<<x<<"\n";

    x-=10;
    cout<<x<<"\n";

    x*=2;
    cout<<x<<"\n";

    x/=10;
    cout<<x<<"\n";

    x%=2;
    cout<<x<<"\n";

    
    return 0;
}

