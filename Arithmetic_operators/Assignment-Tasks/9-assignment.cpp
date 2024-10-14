#include <iostream>
using namespace std;
/**
 * main - entry point of the program
 * 
 * Description - calculates the circle area using the circumference(L)
 * 
 * Reuturn: 0 on success, otherwise 1
 */
// problem #21
int main (void)
{
    float L, AreaOfCircle;
    const float PI = 3.14;

    cout << "Enter the circumference of the circle: ";
    cin >> L;

    AreaOfCircle = (L * L) / (4 * PI);

    cout << "Area = " << AreaOfCircle << "\n";

    return (0);
}