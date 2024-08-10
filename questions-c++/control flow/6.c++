/*CUP PROBLEM
There are 'n' cups placed in a line. You and your opponent will take turns picking up cups one at a time. We need to find who win's the game.

Rules:
On each turn, a player must pick up one cup from either end of the line.
You cannot skip a turn.
The game continues until all cups are gone.
The player who collects the most cups at the end of the game wins.

Note - 1st cup is picked by you.
       If picked last you win.*/
 //program to understand even-odd game      
 #include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of cups";
    cin >> n; 
    if(n%2==0)
    {
        cout << "Opponent Won";
    }
    else
    {
        cout << "You Won";
    }
    return 0;
    
}
