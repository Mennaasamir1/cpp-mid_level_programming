#include "main.h"

int CalcComission(int TotalSales)
{
    int commission;
    float percentage;

    if (TotalSales > 1000000)
    {
        percentage = 0.01;
        commission = percentage * TotalSales;
        return commission; 
    }
    else if (TotalSales > 500000 && TotalSales <= 1000000)
    {
        percentage = .02;
        commission = percentage * TotalSales;
        return commission;
    }
    else if (TotalSales > 100000 && TotalSales <= 500000)
    {
        percentage = .03;
        commission = percentage * TotalSales;
        return commission;
    }
    else if (TotalSales > 50000 && TotalSales <= 100000)
    {
        percentage = .04;
        commission = percentage * TotalSales;
        return commission;
    }
    else
    {
        percentage = 0;
        commission = TotalSales * percentage;
        return commission;
    }
}