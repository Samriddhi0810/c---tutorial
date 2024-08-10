//program to print largest among 3 numbers.(method 2)
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"a is greatest";

    else if(b>a && b>c)
    cout<<"b is greatest";

    else 
    cout<<"c is greatest";

    return 0;
}
