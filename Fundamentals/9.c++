//program to understand the working of different types of backslash character contsants.
#include<iostream>
int main()
{
   const int a=10;
    std::cout<<a<<"\t"; //horizontal tab
    std::cout<<a<<"\v"; //vertical tab
    std::cout<<a<<"\n"; //new line
    std::cout<<a<<"\b";  //back space 
    std::cout<<a;  
    return 0;
}