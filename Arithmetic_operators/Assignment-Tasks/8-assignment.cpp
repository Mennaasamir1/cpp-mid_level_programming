#include <iostream>
using namespace std;
/**
 * main - entry point of the program
 * 
 * Description - calculates the area of a circle inscribed in square
 * using the square's side
 * 
 * Return: 0 or 1
 */

// problem #20
int main(void)
{
    float SideOfSquare, AreaOfSquare;
    const float PI = 3.14;

    cout << "Enter the side of square: ";
    cin >> SideOfSquare;

    AreaOfSquare = (PI * SideOfSquare * SideOfSquare) / 4;

    cout << "Circle Area = " << AreaOfSquare << endl;
 
    return (0);
}