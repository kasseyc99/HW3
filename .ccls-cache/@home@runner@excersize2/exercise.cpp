//***********************************************************
// Name: <kassem chahrour>
// Title: <exercise2>.cpp
// Description: Write a program named “Exercise2.cpp”, which reads one integer and displays the numbers of
//power-of-2 until the input value. Don’t show any number more than the input
// Date: 9/29/2023
//***********************************************************
#include <iostream>
using namespace  std;

int main() {
  std::cout << "Type one integer here.";
  int input;
  cin >> input;
  for(int power = 1; power <= input; power = power * 2)
  {
    
    cout << power << " ";
    
}
return 0;
}

