#include "main.h"

int power_of_num(int number, int m)
{
    int result = 1, counter = 1, power = m + 1;

    if (m == 0)
    {
        result = 1;
    }
    else
    {
        for (counter; counter < power; counter++)
        {
            result *= number;
        }
    }
    return result;
}