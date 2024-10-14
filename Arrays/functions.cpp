#include "main.h"

float CalcAverage(float grades[3], float NumElements)
{
    float Average;

    
    Average = (grades[0] + grades[1] + grades[2]) / NumElements;

    return (Average);
}