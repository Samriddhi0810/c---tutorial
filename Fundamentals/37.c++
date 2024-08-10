//program to understand declaration and defination of a function(method 2-declare first then use then define)
#include<iostream>
using namespace std;
int getmax(int a, int b);  //declaration

int main(){
    int x=10,y=20;
   cout<<getmax(x,y);      //use 
    return 0;
}

int getmax(int a, int b)
{ 
    if(a>b)              //definition
    return a;
    else
    return b;
}