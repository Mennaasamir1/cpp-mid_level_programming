#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - calculates half of a given number
 * 
 * Return: 0 or 1
 */

// problem #9
int main(void)
{
    short int Number, Result;

    cout << "Enter a number: ";
    cin >> Number;

    Result = Number / 2;

    cout << "Half of " << Number << " is " << Result << endl;

    return (0);
}