#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
float tolerate(int& inputted_tolerance, int&inputted_integer)
{
    float percentage = 0;//resrt of the percentage value
    int flip = rand() % 2;//determines weather it is a positive or negative number.
    percentage = rand()%inputted_tolerance;
    if (flip == 1)
    {
        percentage = (percentage / 100) + 1;//increase by the tolerance
    }//end of if
    else
    {
        percentage = 1 - (percentage / 100);//decrease by the tolerance
    }//end of else
    inputted_integer = inputted_integer * percentage;//the actual calcualtion for the number that will be returned
    return inputted_integer;
}//end of function
int main()
{
    int tolerance, input, loop, highest=0;
    float output;
    //outputs asking for inputs
    cout << "Please enter a number to set a tolerance of: ";
    cin >> tolerance;
    cout << "Please enter a number to increase by the set tolerance: ";
    cin >> input;
    cout << "Please enter the number of time to repeat the process: ";
    cin >> loop;
    //loop for the program to do calcualtions
    for (int i = 0; i < loop; i++)
    {
        output = tolerate(tolerance, input);
        if (output > highest)
        {
            highest = output;
        }//end of if
    }//end of for
    cout << "The final number is: " << output << endl << "The highest number was: " << highest;
}//end of program
