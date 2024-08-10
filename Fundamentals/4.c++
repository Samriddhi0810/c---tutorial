//Q.program to learn what happen when we have local,global and block-level variables 
//with same name.
//Ans=innermost>outer>global

#include<iostream>
using std::cout;
int x=3; //global
int main(){
    int x=6; //outer
    {
        int x=7; //inner-most
         cout<<x;  
    }
    return 0;
}