//program to understand c++ style explicit conversion.
#include<iostream>
using namespace std;

int main(){

int x=15;
char y=2;
double z=static_cast<double>(x)/y;
cout<<z;
    return 0;
}