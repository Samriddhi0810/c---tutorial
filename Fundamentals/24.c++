//program to understand arirhmetic operator(part2->binary operators:+,-,*,/,%)
#include<iostream>
using namespace std;
int main()
{
    int x=20,y=10;
    int a=4,b=-3,c=0;
    float d=3.4;
    cout<<"Addition is "<<x+y<<endl;      //addition
    cout<<"Subtraction is "<<x-y<<endl;   //subtraction
    cout<<"multipication is "<<x*y<<endl;  //multiplication
    cout<<"Division is "<<x/y<<endl;       //division
    cout<<"Modulus is "<<x%y<<endl<<endl<<endl<<endl;  //modulus

    cout<<a%b<<endl;        //modulus takes the sign of 1st operand and applicable only in interger types
    cout<<a/c<<" "<<a%c<<endl;    //undefined in integers
  
        return 0;
}