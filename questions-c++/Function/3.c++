//understanding functions(recursion)
#include<iostream>
using namespace std;
void fun(int x){
if(x==0)
return;   //when there's nothing to return
else
cout<<"Moon"<<endl;
fun(x-1);  //recursive function
}
int main(){
    fun(3);
    return 0;
}