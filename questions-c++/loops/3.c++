//program to print the tables of first 'n' positive integers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer 'n'";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=10;j++){
        cout<<(i*j)<<" ";
    }
       cout<<"\n"; 
    }
    return 0;
}