#include "main.h"
/**
 * cirAreaInSquare - prints the area of a circle
 * inscribed in square (using side of the square).
 * 
 * Return: Area
 */
float cirAreaInSquare(float a)
{
    const float PI = 3.14;

    return (PI * pow(a, 2) / 4);
}