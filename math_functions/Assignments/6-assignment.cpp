#include <iostream>
#include <cmath>
using namespace std;

/**
 * main - entry point
 * 
 * Description - prints the area of a circle decribed around 
 * an arbitrary triangle
 * 
 * Return: 0 or 1
 */

//problem #23
int main(void)
{
    float a, b, c, p, area;
    const float PI = 3.14;

    cout << "Enter side1 of the triangle: ";
    cin >> a;

    cout << "Enter side2 of the triangle: ";
    cin >> b;

    cout << "Enter base: ";
    cin >> c;

    p = (a + b + c) / 2;
    area = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    area = pow(area, 2);
    area = PI * area;

    cout << "area of circle = " << round(area) << endl; 

    return (0);
}