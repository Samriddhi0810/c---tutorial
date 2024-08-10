//understanding function(compiler dependent program-not recommended)->it will give wrong result
#include<iostream>
using namespace std;
void fun(int a,int b, int c){
    cout<<a<<" "<<b<<" "<<c;
    
}
int main(){
    int i=4;
    fun(++i,++i,++i); //such expressions are evaluated first then assigned
    return 0;
}