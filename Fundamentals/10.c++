//program to understand the working of typedef,#define,pow(),log10() in c++.
#include<iostream>
#include<cmath>   //header file which contains pow() and log10() functions in c++
#define MAX 3.14 //Macro constant
typedef int I; //typedef declaration
I main()
{
    I a=435;
    std::cout<<a<<"\n";
    std::cout<<MAX<<"\n";
    std::cout<<pow(3,3)<<"\n";    //funtion to find power
    std::cout<<I(log10(a)+1);    //funtion to count no. of digits 

    return 0;
}