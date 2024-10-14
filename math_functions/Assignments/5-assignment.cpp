#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - prints area of a circle inscribed in an isosceles triangle
 * 
 * Return: 0 or 1
 */
//problem #22
int main(void)
{
    float SideOfTriangle, Area, Base;
    const float PI = 3.14;

    cout << "Enter side of triangle: ";
    cin >> SideOfTriangle;

    cout << "Enter base of triangle: ";
    cin >> Base;

    Area = (PI * pow(Base, 2) / 4) * ((2 * SideOfTriangle - Base) / (2 * SideOfTriangle + Base));

    cout << "Area of circle = " << floor(Area) << endl;

    return (0);
}