//program to understand short-circuiting in logical operators.
#include<iostream>
using namespace std;
int main(){

    //&& operator
	int a = 10, b = 4;
	bool res1 = ((a == b) && cout << "GeeksQuiz ");  //no ouput as it didn't move to the cout expression
    
	bool res2 = ((a != b) && cout << "GeeksQuiz1"<<endl);  


    // || operator
	bool res3 = ((a != b) || cout << "GeeksQuiz");   //no ouput as it didn't move to the cout expression

	bool res4 = ((a == b) || cout << "GeeksQuiz2"); 
    
	return 0;
}

