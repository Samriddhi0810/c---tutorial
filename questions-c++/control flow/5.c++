//program to make a game where we have co-ordinates of a pointer,the cordinates are stored in x and y variables respectively. user makes a move and user can make one of these four moves:-1.left,2.right,3.up,4.down
#include<iostream>
using namespace std;
int main(){
    int x=0,y=0;
    char move;
    cout<<"Enter your direction"<<endl;
    cin>>move;
    switch(move){
        case 'L':
        cout<<--x;
        break;
        case 'R':
        cout<<++x;
        break;
        case 'T':
        cout<<++y;
        break;
        case 'B':
        cout<<--y;
        break;
        default:
        cout<<"Enter invalid direction";
        break;
    }
    return 0;
}