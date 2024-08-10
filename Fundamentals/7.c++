//program to declare the variable count such that i is printed when the function 
//is called for the ith call.(application of static keyword.)
#include<iostream>
void utility()
 {
    static int count=0;
    count++;
    std::cout<<count<<" ";
 }
int main()
{
    int n;
    std::cout<<"Enter the number of times the function is to be called"<<"\n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
     utility();
    }
     return 0;
}
 

