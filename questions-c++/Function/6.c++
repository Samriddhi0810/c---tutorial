//program to find volume of cube and rectangular box using function overloading.
#include<iostream>
using namespace std;

int volume(int s){
    return s*s*s;
}

int volume(int l,int w,int h){
    return l*w*h;
}

int main(){
    int side=4;
    int lg=2,wd=3,ht=4;
    cout<<"volume of cube is="<<volume(side)<<endl;
    cout<<"volume of retangular box is="<<volume(lg,wd,ht)<<endl;
    return 0;
}