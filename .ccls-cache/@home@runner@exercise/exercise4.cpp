//***********************************************************
// Name: <kassem chahrour>
// Title: <exercise4>.cpp
// Description: integer calculator 
// Date: 9/29/2023
//***********************************************************
#include <iostream>

using namespace std;

int main() {

  int userinput;
  
  int sum =0;
  
bool a = true;
  while ( a) 
    {
      cout << " type one postive integer or -1 (quit) " ;
      cin>> userinput;
      
      if (userinput == -1) {
        
          break;
      
      }
     else {
       sum = sum + userinput; 
     
     }
      
         
     }
     
  cout<< " Total:" << sum << endl;
 return 0; 
  //test 1
  
}