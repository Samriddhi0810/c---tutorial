//program to Find A.P Term.
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"Enter the first no a:";
    cin>>a;
    cout<<"Enter the difference d:";
    cin>>d;
    cout<<"Enter the term 'n'to be printed:";
    cin>>n;
    int res=a+((n-1)*d);
    cout<<"Required term is="<<res;

return 0;
}
