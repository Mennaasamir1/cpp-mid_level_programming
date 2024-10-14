#include <iostream>
using namespace std;
/**
 * main - entry point
 * 
 * Description - calculates the area of a rectangle.
 * 
 * Return: 0 or 1
 */

// problem #17
int main(void)
{
    float height, width, Area;

    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter height of rectangle: ";
    cin >> height;

    Area = width * height;

    cout << "Area: " << Area << endl;
}