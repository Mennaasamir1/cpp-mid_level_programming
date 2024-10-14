#include "main.h"

int main(void)
{

    float g[3], NumOfElements;

    NumOfElements = sizeof(g) / sizeof(g[0]);

    ReadGrades(g);
    CalcAverage(g, NumOfElements);
    PrintAverage(g, NumOfElements);



    return (0);
}