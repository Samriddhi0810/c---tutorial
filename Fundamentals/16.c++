//program to understand i/o streams and different ways to print different type of strings
#include<iostream>
using namespace std;

int main(){
   string a;
//Escaping sequence (if you want "moon's world" in output)
cout<<"welcome to \"moon's world\""<<endl; 
//if you want \ in output along with space
cout<<"welcome to \\moon's world"<<"\n"; 
//if you want to read string with spaces
cout<<"Enter string:";
getline(cin,a);
cout<<"string is:"<<a;
    return 0;

}
