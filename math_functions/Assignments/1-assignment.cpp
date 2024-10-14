#include <iostream>
#include <cmath>
using namespace std;
/**
 * main - entry point
 * 
 * Description - prints the area of a circle.
 * 
 * Return: 0 or 1
 */
// problem #18
int main(void)
{
    float R, Area;
    const float PI = 3.14;

    cout << "Enter radius of circle: ";
    cin >> R;

    Area = PI * pow(R, 2);
    cout << "Area of circle = " << ceil(Area) << endl;

    return (0);

}