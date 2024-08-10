//Program to understand for loop and its properties(uncomment and understand)
#include<iostream>
using namespace std;
int main(){
    //INITIALIZATION STATEMENT CAN BE SKIPPED WHILE WRITING 'FOR' LOOP 
    int i=1;
    for(;i<=5;i++)//no chamge ,all same as normal for loop
    {
        cout<<"moon\n";
    }


    //WE CAN INITIALIZE MORE THAN ONE VARIABLE AND CAN PUT MORE THAN ONE CONDITIONn BUT NOTE THAT ONLY THE LAST CONDITION IS CONSIDERED AS TERMKNATION CONDITION

    //     for (int i=1,j=0;i<5,j<3;i++) // infinte loop
    //  {
    //  cout<<i<<","<<j;

    //  }

  

        //only the last condition will be treated as terminaion rest are treated as normal statement but both i and j upadtion are considered      
        // for (int i=1,j=0;i<5,j<3;i++,j++) 
        // {
        // cout<<i<<" "<<j<<endl;
        // }


        //logical and relational conditions are also allowed
        // for ( int i=1,j=0;i<=10||j<3;i++,j++)   //doubt
        // {
        // cout<<i<<" "<<j<<endl;
        // }


        //NEVER GET INSIDE FOR LOOP
        // for (int i=1,j=0;i==10;i++,j++)  //no ouput
        // {
        // cout<<i<<" "<<j<<endl;
        // } 


        // IT CONSIDER ; AS {;}
    //     int i,j;
    //     for (int i=1,j=0;i<5,j<=6;i++,j++); //output=8,7
    //     {
    //    cout<<i<<" "<<j<<endl;
    //     }



     // IN CASE OF NO INITIALIZATION, CONDITION AND UPDATION
    // for(; ; ){
    //     cout<<"moon\n";   //infinite loop
    // }  


    //SINGLE LOOP STATEMENT
    // for(int i=0;i<5;i++)
    //     cout<<i<<endl;
        // cout<<i;  //it will not consider this as a part of loop since it is  single statement loop as '{' '}' are not present



    
    return 0;
}