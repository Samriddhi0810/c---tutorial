// program to understand the working of different types of variables in c++
#include <iostream>
using std::cout;
using std::endl;
int z = 10; // global variable
void fun1()
{
    int x = 2;        // local variable
    static int y = 4; // static variable
    x = x + 1;
    y = y + 1;
    cout << x << "," << y << endl;
    cout << z << endl;
}
void fun2()
{
    cout << z << endl;
}

int main()
{
    fun1();
    fun1();
    fun1();
    fun2();

    return 0;
}
