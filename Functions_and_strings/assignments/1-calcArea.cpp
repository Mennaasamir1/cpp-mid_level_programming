#include "main.h"

float CalcArea_diagonal(float side, float d)
{
    return(side * sqrt(pow(d, 2) - pow(side, 2)));
}