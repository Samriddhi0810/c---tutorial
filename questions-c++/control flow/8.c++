//program to make simple calculator.
//1-addition, 2-subtraction, 3-multiplication
#include<iostream>
using namespace std;
int main(){

int a, b, op;
cout<<"Enter two numbers:"<<"\n";
cin>>a>>b;
cout<<"Enter operation(1-3) to be performed"<<"\n";
cin>>op;
 if(op== 1)
    cout<<a+b;
    
     else if(op== 2)
    cout<< a-b;
    
    else if(op== 3)
    cout<< a*b;
    
    else
    cout<<"Invalid Input";
    return 0;
}