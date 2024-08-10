//program to find the febonacci series.
// 0 1 1 2 3 5 8 13 21 ..........
#include<iostream>
using namespace std;

int main(){
int n; 
cout<<"Enter a no. of terms";
cin>>n;
cout<<"0 1"<<" ";
int a=0, b=1,c;

//i stands for no. of terms
for(int i=2;i<=n;i++){   // started from 2 because we have already printed 2 terms 

     c=a+b;           
    cout<<c<<" "<<endl;
    a=b;
    b=c;
}

// IF you want to print the sum of febonacci series /nth term then
cout<<" sum of series :"<<c;


    return 0;
}