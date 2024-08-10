//program to print sum of n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.'n' upto which the sum has to be printed";
    cin>>n;
    int sum=(n*(n+1))/2;
    cout<<"sum of"<<n<<"natural number is="<<sum;

return 0;
}
