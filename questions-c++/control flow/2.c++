//program to check whether a no. is positive, negative or zero(else if ladder demonstration )
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n>0)
     cout<<"positive no.";
    else if(n<0)
     cout<<"negative no.";
    else
     cout<<"Zero";
    return 0;
}