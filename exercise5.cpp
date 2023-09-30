//***********************************************************
// Name: <kassem chahrour>
// Title: <exercise5>.cpp
// Description: grade calculating program
// Date: 9/30/2023
//***********************************************************
#include <iostream>
using namespace std;
int main()
{
    char userInput;
    int sum = 0;
    int count = 0;

    while (true)
    {
        std::cout << "Enter grades (A,B,C) or Q to quit:\n"
                  << std::endl;
        std::cin >> userInput;

        if (userInput == 'A')
        {
            sum += 4;
            count++;
        }
        else if (userInput == 'B')
        {
            sum += 3;
            count++;
        }
        else if (userInput == 'C')
        {
            sum += 2;
            count++;
        }
        else if (userInput == 'Q')
        {
            sum = sum / count;
            std::cout << "The average is: " << sum << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
        }
    }
}