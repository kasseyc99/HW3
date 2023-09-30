#include <iostream>

//***********************************************************
// Name: <kassem chahrour>
// Title: <exercise3.0>.cpp
//Description: which reads one integer and displays a pyramid
//shape with ‘*’ (asterisk)s. The height (# of rows) of pyramid should be the input value. The
//following shows two test cases. Each line breaks once the last “*” is printed out
// Date: 09/29/2023
//***********************************************************


using namespace std;

int main() {
    int rows;
    cin >> rows;

    
  for(int first = 1; first <= rows; ++first)
    // this checks the loop if it does not come true then it stops here
    
    {
        // for loop for spaces
        for(int second = 1; second <= (rows-first); ++second)
        {
            cout <<" ";
        }
        // for loop for '*'
        for(int third = 1; third <= ( 2*first - 1) ; ++third) 
        {
            cout << "*";   
        }
        cout << "\n";
    }    
    return 0;
}
