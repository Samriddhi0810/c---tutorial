//program to print the last digit of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.whose last digit has to be printed:";
    cin>>n;
    int res=n%10;
    cout<< "last digit of"<<n<<"is:"<<res;

return 0;
}
