//program to understand how compiler responds if we do function overloading with default argument.
#include<iostream>
using namespace std;
void print(int x=0)
{
   cout<<x<<"\n"; 
}
void print(){
}

int main(){
    print();    //ambigious call as compiler is confused which function to call
 return 0;
}