#include "main.h"
/**
 * Swap_numbers - swaps the values of 2 numbers
 * @num1: first number
 * @num2: second number
 */
void Swap_numbers(short &num1, short &num2)
{
    short temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "num1 = " << num1 << " ,num2 = " << num2 << endl;
}