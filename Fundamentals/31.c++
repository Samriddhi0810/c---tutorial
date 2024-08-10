//Program to understand the concept of if-else  statement( vote eligiblity) (note:understand nested if and if else ladder directly from questions)
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible for vote"<<endl;
        cout<<"u should vote";
    }
    else 
    {
        cout<<"not eligible for vote"<<endl;
        cout<<"u cannot vote";
    }
   
    return 0;
}