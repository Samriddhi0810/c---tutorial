//program to check whether a number is prime or not
#include<iostream>
using namespace std;
int main(){
bool isprime=true;    
int n;
cout<<"Enter a number:";
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        isprime=false;
    break;
    }
    i++;
}
if(isprime==true){
    cout<<"prime number";
}
else
cout<<"Not a prime number";
return 0;
}