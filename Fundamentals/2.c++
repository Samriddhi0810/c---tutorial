//program to understand the difference between keywords and predefined identifiers in c++
#include<iostream>
int main()
{
    int main =84;//predefined identifier(hence we can use it as variable name but we should not do it for better )
    int cout=34;//predefined identifier
    //int else =67;//keyword(hence we cannot use this as variable name)
    std::cout<<main<<std::endl<<cout;

    return 0;
}
