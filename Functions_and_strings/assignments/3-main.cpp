#include "main.h"

int main(void)
{
    float sideOfSqaure, C, base, side, a, b, c, Num, M;

    cout << "Enter a number and m: ";
    cin >> Num; cin >> M;
    cout << Num << " ^ " << M << " = " << PowerOfM(Num, M) << endl; 
    /*
    cout << "Enter a number: ";
    cin >> Num;
    PowerOfNum(Num);
    cout << "Enter a, b, c: ";
    cin >> a; cin >> b; cin >> c;

    cout << "Circle of area described around arbitrary triangle: " << CircleInArbitrary(a, b, c) << endl;
    cout << "Enter base and side of the triangle: ";
    cin >> side; cin >> base;

    cout << "The area of the circle inscribed in an isosceles triangle: " << cirleInIsosceles(side, base) << endl;
    
    cout << "Enter circumference of the circle: ";
    cin >> c;

    cout << "circle area using the circumference = " << cirAreaCircum(c) << endl;

    cout << "enter side of square: ";
    cin >> sideOfSqaure;
    cout << "Area of circle: " << cirAreaInSquare(sideOfSqaure) << endl;
    */

    return(0);
}