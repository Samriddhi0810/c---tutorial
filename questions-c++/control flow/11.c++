// program to check whether a given triangle is a valid triangle or not(if-else)
// validity condition:A+B>C,B+C>A,C+A>B
#include<iostream>
using namespace std;
int main(){
int a, b, c;
 cout<<"Enter three sides of a triangle";   
 cin>>a>>b>>c;
  if (a + b > c && b + c > a && c + a > b) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}