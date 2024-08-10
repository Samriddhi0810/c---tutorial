//program to swap two numbers without using third variable 
#include<iostream>
using namespace std;
int main(){
int a=10,b=30;
cout<<"initial values of a and b are:"<<a<<" "<<b<<endl;
a=b-a;
b=b-a;
a=a+b;
cout<<"swapped values of a and b are:"<<a<<" "<<b; 

    return 0;
}