//Program to understand Formatting manipulation.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=12,b=1234;

cout<<setw(3);
cout<<b<<"\n";

cout<<setw(5);
cout<<a<<"\n"; //will print space since nothing filled

cout<<setw(5);
cout<<setfill('*'); //will print * 
cout<<a<<"\n";

cout<<left;
cout<<setw(5);
cout<<a<<"\n";

    return 0;
}