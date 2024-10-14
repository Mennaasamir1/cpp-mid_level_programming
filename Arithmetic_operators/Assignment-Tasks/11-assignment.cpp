#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - calculates a number to the power of 2, 3, 4
 * 
 * Return: 0 or 1
 */

// problem #31
int main (void)
{
    short int Number;

    cout << "Enter a number: ";
    cin >> Number;

    cout << Number << " ^ 2 = " << Number * Number << endl;
    cout << Number << " ^ 3 = " << Number * Number * Number << endl;
    cout << Number << " ^ 4 = " << Number * Number * Number * Number << endl;

    return (0);
}