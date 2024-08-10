//program to understand if statement.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age>20 && age<30)   //acc to this ques only 20-30 is the age to drink
    {
    cout<<"your age is"<<age<<endl;
    cout<<"your can drink daru";
    }
    cout<<"your cannot drink daru";
    return 0;
}