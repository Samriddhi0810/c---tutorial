//program to find first digit of a number.
#include<iostream>
using namespace std;
int first(int n)
{
    if(n<10)
    return n;
    else 
    first(n/10);

}

int main(){
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    cout<<"First digit of the given number is:"<<first(num);
    return 0;
}