#include "main.h"

int CalcPowerOfNum(int &num, int &power)
{
    int result = 1, i;

    i = 1;
    while (i <= power)
    {
        result *= num;
        i++;
    }
    return (result);

}