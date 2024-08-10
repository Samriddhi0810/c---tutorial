//program to understand sizeof() operater.
//sizeof() operator returns no. of bytes required for a datatype,can be used with datatypes,variables and literals also.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int c=10.5;
    char b='A';
    cout<<sizeof(int)<<"\n";        //DATATYPE
    cout<<sizeof(float)<<"\n";
    cout<<sizeof(char)<<"\n";
    cout<<sizeof(double)<<"\n"<<"\v";

    cout<<sizeof(a)<<"\n";         //VARIABLE
    cout<<sizeof(b)<<"\n"<<"\v";

    cout<<sizeof(15.6)<<"\n";      //LITERALS
    cout<<sizeof(15)<<"\n";
    cout<<sizeof('A')<<"\n"<<"\v";

    cout<<sizeof(a*c)<<"\n";      //IT DOESN'T EXECUTE ANY INSTRUCTION HENCE IT TOOK 'a' KA DATATYPE AS ENCOUNTERED FIRST


    return 0;
}