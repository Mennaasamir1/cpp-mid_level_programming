#include "main.h"

/**
 * main - entry point of the program.
 * 
 * Return: 0 on success, 1 on failure.
 */
int main(void)
{
    float r, d;
    short num1 = 4, num2 = 5;
    float width, height, side, d;


    cout << "Enter diameter: ";
    cin >> d;
    cout << CirAreaDiam(d) << endl;

    cout << "Enter radius: ";
    cin >> r;
    cout << "circle area = " << calcCircleArea(r) << endl;

    cout << "Enter side and diagonal: ";
    cin >> side; cin >> d;
    cout << "Area of Rectangle: " << CalcArea_diagonal(side, d) << endl; 
    
    cout << "enter width and height:  ";
    cin >> width; cin >> height;
    cout << "Area = " << CalcArea(width, height) << endl;

    cout << "num1 = " << num1 << " ,num2 = " << num2 << endl;
    Swap_numbers(num1, num2);

    
    helloWorld();
    cout << endl;
    Your_name();
   
    return (0);
}