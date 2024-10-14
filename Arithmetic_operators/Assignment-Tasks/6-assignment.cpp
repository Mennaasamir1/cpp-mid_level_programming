#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - calculates the area of a triangle = base / 2 * height
 * 
 * Return: 0 or 1
 */
// problem #17
int main(void)
{
    float height, base, AreaOfTriangle;

    cout << "Enter height of triangle: ";
    cin >> height; 
    cout << "Enter base of triangle: ";
    cin >> base;

    AreaOfTriangle = base / 2 * height;
    cout << "Area of triangle = " << AreaOfTriangle;

    return (0);
}