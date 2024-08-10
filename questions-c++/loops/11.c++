//program to find the gcd/hcf
// ex:-(6,9)-->hcf will always be less than equals to min(6,9) ie. 6
#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"Enter a number:";
cin>>n1>>n2;

int end=min(n1,n2);
for(int i=2;i<=end;i++){
if( n1%i==0 && n2%i==0){
    cout<<"hcf is="<<i<<" "; 
}
}
    return 0;
}
