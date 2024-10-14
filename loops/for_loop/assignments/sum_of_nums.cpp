#include "main.h"

int SumOFoddNums(int N)
{
    int num, sumOfOdd = 0;

    for (num = 1; num <= N; num++)
    {
        if (num % 2 != 0)
        {
            sumOfOdd += num;
        }
        
    }
    return (sumOfOdd);
    //cout << "\n";
}

int sumOFeven(int N)
{
    int num, sumOfeven = 0;

    for (num = 1; num <= N; num++)
    {
        if (num % 2 == 0)
        {
            sumOfeven += num;
        }
    }
    return (sumOfeven);
}