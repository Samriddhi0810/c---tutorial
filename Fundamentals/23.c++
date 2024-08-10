///program to understand the Arithmetic operators(part1:unary operators->unary plus,unary minus,pre/post increment,pre/post decrement)
#include<iostream>
using namespace std;
int main()
{
    int x=10,y,z,b=6,a=2;
    y=x++; //post increment opr.
    z=++x;  //pre increment opr.
    int c=a+(-b); //unary minus opr.
    int d=a+(+b); //unary plus opr.
    cout<<c<<" "<<d<<endl; 
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    return 0;
}
//note:- decrement opr. works same as increment opr but in decreasing manner.
