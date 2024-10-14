#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - prints the area of a circle
 * inscribed in a square
 * 
 * Return: 0 or 1
 */
// problem #20
int main(void)
{
    float SideOfSquare, Area;
    const float PI = 3.14;

    cout << "Enter side of square: ";
    cin >> SideOfSquare;

    Area = PI * pow(SideOfSquare, 2) / 4;

    cout << "Area of circle = " << ceil(Area) << endl; 
    return (0);
}