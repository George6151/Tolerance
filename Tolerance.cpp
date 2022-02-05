#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
float tolerate(int& inputted_tolerance, int&inputted_integer)
{
    float percentage = 0;
    int flip = rand() % 2;
    percentage = rand()%inputted_tolerance;
    if (flip == 1)
    {
        percentage = (percentage / 100) + 1;
    }
    else
    {
        percentage = 1 - (percentage / 100);

    }
    inputted_integer = inputted_integer * percentage;
    return inputted_integer;
}
int main()
{
    int tolerance, input, loop, highest=0;
    float output;
    cout << "Please enter a number to set a tolerance of: ";
    cin >> tolerance;
    cout << "Please enter a number to increase by the set tolerance: ";
    cin >> input;
    cout << "Please enter the number of time to repeat the process: ";
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        output = tolerate(tolerance, input);
        if (output > highest)
        {
            highest = output;
        }
    }
    cout << "The final number is: " << output << endl << "The highest number was: " << highest;
}