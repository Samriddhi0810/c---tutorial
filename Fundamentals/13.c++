//program to understand typecasting-->c-style implicit and explicit conversion.
#include<iostream>
using namespace std;
int main()
{
    int x=15,y=2;
    
    // C-style implicit conversion
    double z = x / y;  // Integer division is performed first, then the result is implicitly converted to double
    cout << "Implicit conversion result (z): " << z << endl;
    
    // C-style explicit conversion
    double a = double(x) / y; // x is explicitly casted to double before division
    cout << "Explicit conversion result (a): " << a << endl;

    return 0;
}