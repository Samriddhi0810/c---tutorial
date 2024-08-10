//program to understand relational opeerators(<,>,==,<=,>=,!=)
#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20; 
    cout << (x<y) << "\n"   //less than
         << (x>y) << "\n"   //greater than
         << (x==y) << "\n"  //is equals to
         << (x>=y) << "\n"  //greater than equals to
         << (x<=y) << "\n"  //less than equals to
         << (x!=y) << "\n"; //not equals to

    return 0;
}
