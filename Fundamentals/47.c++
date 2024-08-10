//program to understand the concept of nested loop.
#include<iostream>
using namespace std;
int main(){
  int i,j;
  for(i=0;i<=5;i++){ //outer loop for starting new row

    for(j=0;j<=5;j++){  //inner loop for completing a row
        cout<<"*";
    
  }
  cout<<"\n";
  }
    return 0;
}