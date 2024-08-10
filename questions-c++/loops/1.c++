//program to find out the smallest divisor of a number greater than 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"smallest divisor is:"<<i;
        break;
        }
    }

    return 0;
}
