//program to check whether a number is palindrome or not
#include<iostream>
using namespace std;

int main(){   
int n,rev=0,rem;
cout<<"Enter a number:";
cin>>n;
int temp=n;
while(n!=0){
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}

if(rev==temp)
cout<<"Palindrome number";
else
cout<<" Not a Palindrome number";

return 0;
}