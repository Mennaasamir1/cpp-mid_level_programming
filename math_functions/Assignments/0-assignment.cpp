#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - a program that prints the area of a rectangle using
 * diagonal and side of rectangle
 * 
 * Return: 0 on success, 1 on failure.
 */
// problem 16
int main(void)
{
    double SideOfRect, Diagonal, Area;

    cout << "Enter Side of rectangle: ";
    cin >> SideOfRect;

    cout << "Enter Diagonal: ";
    cin >> Diagonal;

    Area = SideOfRect * sqrt(pow(Diagonal, 2) - pow(SideOfRect, 2));

    cout << "Area of Rectangle = " << Area << endl;

    return (0);
}