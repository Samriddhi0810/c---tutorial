//program to understand the manipulating default format of floating point no.
#include<iomanip>
#include<iostream>
using std::cout;
int main(){

    double x=15.5683,y=34267.1;
    cout<<std::setprecision(4);  //sets the total no. of digits
    cout<<x<<" "<<y<<"\n";

    double z=1.23;
    cout<<std::showpoint<<z<<"\n";  //show trailing zeros
    cout<<std::showpos<<z<<"\n";    //show +tive sign in front of +tive no.
    cout<<std::uppercase<<z<<"\n";  //convert into upper case
    return 0;
}