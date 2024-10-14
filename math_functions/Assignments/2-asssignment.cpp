#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - prints the area of a circle using Diagonal
 * 
 * Return: 0 or 1
 */
// problem #19
int main(void)
{
    float Diagonal, Area;
    const float PI = 3.14;

    cout << "Enter Diagonal: ";
    cin >> Diagonal;

    Area = PI * pow(Diagonal, 2) / 4;

    cout << "Area of circle = " << ceil(Area) << endl;

    return (0);
}

