//program to understand the concept of constants or literals,const keyword in c++.
#include<iostream>
int main(){
    const int a=5;   //all a,b,c,d being declared constant doesn't change value and if we wanna change as mentioned below 
    const float b=5.6; //in comment /*  */,it would cause error.
    const char c='e';
    const char d[5]="moon";
    /*a=4;
    b=6.4;
    c='g';
    d="mishra";*/
   std::cout<<"a="<<a<<"\n";
   std::cout<<"b="<<b<<"\n";
   std::cout<<"c="<<c<<"\n";
   std::cout<<"d="<<d<<"\n";
    return 0;
}
