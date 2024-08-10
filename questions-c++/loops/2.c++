//program to print all the numbers less than or equal to 'n' that are not multiple of x
#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter a number n and x";
    cin>>n>>x;

    for(int i=1;i<=n;i++)
    {
        // without continue statement
        // if(i%x!=0)
        // cout<<i<<endl;

        // with continue statement
        if(i%x==0){
        continue;
        }
        cout<<i<<endl;

    }

    return 0;
}