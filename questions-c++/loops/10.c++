//program to find the lcm of two numbers
// ex:-(6,9)-->lcm will always lie between max(6,9) ie. '9' and 6*9 ie. '54'
#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"Enter a number:";
cin>>n1>>n2;

int start=max(n1,n2);
int end=n1*n2;
for(int i=start;i<=end;i++){
if( i%n1==0&& i%n2==0){
    cout<<"lcm is="<<i;
    break;   
}
}
    return 0;
}
