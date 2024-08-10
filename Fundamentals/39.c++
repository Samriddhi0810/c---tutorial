//program to understand the concept of function overlaoding with different type of arguments.
#include<iostream>
using namespace std;
void print(char c)
{
cout<<c<<"\n";
}

void print(int a)
{
cout<<a<<"\n";
}

void print(string s){
cout<<s<<"\n";
}

int main(){
    print('a');
    print("moon");
    print(10);
    return 0;
}