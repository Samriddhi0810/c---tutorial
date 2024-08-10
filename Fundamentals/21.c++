//program to understand the fixed manipulating format of floating point no.
#include<iomanip>
#include<iostream>
using std::cout;
int main(){
    double x=1.23,y=1122456.453;

    cout<<std::fixed;                //no use of 'e'
    cout<<x<<" "<<y<<"\n";  
       
       cout<<std::setprecision(2);   //after decimal 2 digits
       cout<<x<<" "<<y<<"\n"; 
       double z=1.2e+7;
       cout<<z;
    
    return 0;
}