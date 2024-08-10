//program to learn various flags used in I/o manipulations.
#include<iostream>
using namespace std;
int main(){

//boolean values
bool a=true;  //1=output
cout<<a<<endl;

/*boolalpha function*/
cout<<boolalpha;   //true=output
cout<<a<<endl;

/*noboolalpha function*/
cout<<noboolalpha;   //1=output
cout<<a<<endl<<endl<<endl<<endl;



//integer values
int x=26,y=20;
cout<<x<<" "<<y<<endl;

/* hexadecimal representation*/
cout<<hex;
cout<<x<<" "<<y<<endl;

/*octal representation*/
cout<<oct;
cout<<x<<" "<<y<<endl;

/*decimal representation*/
cout<<dec;
cout<<x<<" "<<y<<endl;

/*showbase and showpos*/
cout<<showbase;    //show 0 prefix for octal
cout<<oct; 
cout<<x<<" "<<y<<endl;
cout<<hex; 
cout<<x<<" "<<y<<endl; //show 0x prefix for hex
cout<<showpos;    
cout<<x<<" "<<y<<endl; 

cout<<uppercase;    //convert into upper case  
cout<<x<<" "<<y<<endl; 

    return 0;
}