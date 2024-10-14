#include "main.h"
/**
 * factorial_of_N - returns the factorial of a number
 * @number: a given number
 * Return: the factorial of the number
 */
unsigned int factorial_of_N(int number)
{
    unsigned int factorial, counter;

    factorial = 1;
    counter = number + 1;

    counter--;
    for (counter; counter > 1; counter--)
    {
        factorial *= counter;
    }
    return factorial;
}