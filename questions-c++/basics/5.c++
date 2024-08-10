//program to find G.P term.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,r,n;
    cout<<"Enter the first no a:";
    cin>>a;
    cout<<"Enter the multiple r:";
    cin>>r;
    cout<<"Enter the term 'n'to be printed:";
    cin>>n;
    int res=a*(pow(r,n-1));
    cout<<"Required term is="<<res;

return 0;
}
