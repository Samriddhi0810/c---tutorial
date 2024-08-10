//program to understand the concept of Functions.
#include <iostream>
using namespace std;
    void fun()
    {
        cout<<"fun() called"<<"\n";
    }
    int main(){
        cout<<"Before calling fun()"<<"\n";
        fun();
        fun();   //you can call function as many times as you can
        cout<<"After calling fun()"<<"\n";
    return 0;
}