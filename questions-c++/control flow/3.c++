//program to check for sign as well as odd or even.(nested if)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    if(n%2==0)
    {
        if(n>0)
        {
            cout<<"Positive Even";
        }
        else{
            cout<<"Negative Even";
            }
    }
    else if(n%2!=0)
    {
        if(n>0)
        {
            cout<<"positive odd";
        }
        else{
            cout<<"Negative odd";
            }
    }
    else
    cout<<"Zero";
    return 0;
}