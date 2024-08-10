//program to find factorial of a number using function
#include<iostream>
using namespace std;
long long int factorial(int N){
       long long int fact=1,i;
        if(N==0 || N==1)
        return 1;
        for(i=1;i<=N;i++)
        {
            fact=fact*i;
        }
        return fact;

    }

int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"Factorial of the provided number is:"<<factorial(num);
    return 0;
}