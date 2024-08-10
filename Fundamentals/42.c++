//Program to understand while loop & its behaviour(uncomment kr kr ke output check kr)
#include<iostream>
using namespace std;
int main(){

// NOTE ALL NUMBERS OTHER THAN '0' ARE CONSIDERED AS TRUE
// or i=true will always give infinte loop 
  int i=1;
  while(i=1)  //assiging 1 to i
  {
    cout<<i;
    i++;
  }


//   int i ;
//   while(i<=10)   //i's value will be unpredictable
//   {
//    cout<<i;
//     i++;
//   }


//   int i=1;
//   while(i==1) //output =1
//    {
//      cout<<i;
//      i++;
//   }


//   int i=1;
//   while() // compilation error
//    {
//      cout<<i;
//      i++;
//   }


//i++ is a post-increment operation. It evaluates to the current value of i and then increments i.
//Since i is initially 0, the condition i++ evaluates to 0 (false), and i is then incremented to 1.
//Because the condition evaluates to false, the body of the while loop is not executed.
//   int i=0;
//   while(i++) //output =end of the program
//    {
//     cout<<i;
//      i++;
//   }
//   cout<<"End of the program";


//T SOME POINT '0' WOULD COME AND IT'LL STOP
//   char ch='a';
//   while(ch) //output= 97 to -1
//   {
//     cout<<ch;
//     ch++;
//   }

  
//Due to semicolon after while statement ,it is seen as '{;}' ie.while loop having single statement hence stuck in that loop as i's value not changing whereas appearing loop body is treated as a  simple block of code  .
// int i=2;
// while(i<5);  
// {
// cout<<i;
// i++;
// }

//NOTE THAT while(ch<197 && i=1) kind of statements are allowed

return 0;
}