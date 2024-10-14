#include "main.h"

int factorial_of_Num(int &num)
{
    int i = 1, result = 1;

    while (i <= num)
    {
        result *= i;
        i++;
    }
    return (result);
}