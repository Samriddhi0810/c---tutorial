//program to understand widening conversions in c++
//rule:-bool->char->short int->int->unsigned int->long->long long->float->double->long double.
#include<iostream>
using namespace std;

int main(){

int a=10;
char b='A';
cout<<(a+b)<<endl;   
float z=5.5;
cout<<(a+z);

    return 0;
}