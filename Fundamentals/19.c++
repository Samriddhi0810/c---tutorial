//program to understand default printing format of floating point numbers.
#include<iostream>
using namespace std;
int main(){

double x=1.23000;
cout<<x<<"\n";        //output->1.23->rule1:no trailing zeros

double y=1567.56732;
cout<<y<<"\n";        //output->1567.57->rule2:default precision is 6

double z=1244567.45;
cout<<z<<"\n";        //output->1.24457e+06->power notation when before decimal there are more than 6 digits

double w=124456.67;
cout<<w<<"\n";        //output->124457->round off

double u=123e+2;
cout<<u<<"\n";          //12300->less than 6 digits
    return 0;
}