#include "main.h"
/**
 * CirAreaDiam - prints the circle area using its diameter.
 * 
 * Return: Area
 */
float CirAreaDiam(float d)
{
    const float PI = 3.14;

    return (PI * pow(d, 2) / 4);
}