#include <iostream>
using namespace std;
/**
 * main - entry point of program.
 * 
 * Description - prints the area of a circle inscribed in an isosceles triangle
 * using S (side of triangle) and B (base of triangle).
 * 
 * Return: 0 or 1
 */

// problem #22
int main(void)
{
    float S, B, AreaOfCircle;
    const float PI = 3.14;

    cout << "Enter side of triangle: ";
    cin >> S;

    cout << "Enter base of triangle: ";
    cin >> B;

    AreaOfCircle = (PI * B * B / 4) * ((2 * S - B) / (2 * S + B));
    
    cout << "Area = " << AreaOfCircle << endl;

    return (0);

}