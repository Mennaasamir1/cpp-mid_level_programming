#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - Calculates the area of a circle using diameter
 * 
 * Return: 0 or 1
 */
// problem #19
int main(void)
{
    float diameter, AreaOfCircle;
    const float PI = 3.14;

    cout << "Enter diameter of the circle: " << endl;
    cin >> diameter;

    AreaOfCircle = (PI * diameter * diameter) / 4;

    cout << "Area of circle = " << AreaOfCircle << endl;

    return (0);
}