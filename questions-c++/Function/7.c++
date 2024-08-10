//program to understand 
#include<iostream>
using namespace std;

int isprime(int n)
{
for(int i=2;i<n;i++){
    if(n%i==0){
    return true;
    }
}
return false;

int prime(int n){
  int count=0;
for(int i=2;i<=n;i++){
            if(primeis(i)){
             while(n%i==0)
             cout<<i<<" ";
                               }
                   }
                     }
}
int main(){
    int N;
    cout<<"Enter a number:"<<endl;
    cin>>N;
    cout<<"Prime factorization of the given number is: "<<prime(N);
    return 0;
}   