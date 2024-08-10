//program to check whether entered alphabet is vowel or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your choice:"<<"\n";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"vowel";
    break;
    default:
    cout<<"not a vowel";
    }
    return 0;
}