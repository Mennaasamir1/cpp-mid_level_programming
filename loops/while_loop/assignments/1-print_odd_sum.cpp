#include "main.h"

int sum_of_odd(int &from, int &to)
{
    int i = 1, sum = 0;

    while (i >= from && i <= to)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    return (sum);
}