#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - prints area of a circle using its circumference.
 * 
 * Return: 0 or 1
 */

// problem #21
int main(void)
{
    float Circum, Area;
    const float PI = 3.14;

    cout << "Enter circumference: ";
    cin >> Circum;

    Area = pow(Circum, 2) / (4 * PI);

    cout << "Area of circle = " << floor(Area) << endl;

    return (0);
}