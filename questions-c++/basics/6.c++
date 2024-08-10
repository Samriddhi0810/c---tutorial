//program to swap two numbers using third variable 
#include<iostream>
using namespace std;
int main(){
int a=10,b=30,c;
cout<<"initial values of a and b are:"<<a<<" "<<b<<endl;
c=a;
a=b;
b=c;
cout<<"swapped values of a and b are:"<<a<<" "<<b; 

    return 0;
}