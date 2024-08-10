//program to understand the basic structure of c++ ,#define and typedef working.    //documentation section(comment)
#include<iostream>      //link section(header file)   
#define max 100        //definition section(macro constant)
typedef int LOVE;      //definition section(typedef keyword to give alternative name to existing data type)
float b=5.9;            //global declaration section(global variable)
void display();       // global declaation section(globally used function)

int main()            //main function
{ 
    std::cout<<"Hello"<<"\n";
    display();
    return 0;
}
void display(){       //subprogram function
    LOVE a=3;
    std::cout<<"Moon"<<"\n";
    std::cout<<"b= "<<b<<"\n";
    std::cout<<"a= "<<a<<"\n";
    std::cout<<"max= "<<max<<"\n";
    
}
