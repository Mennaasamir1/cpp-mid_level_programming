#include "main.h"
/**
 * cirleInIsosceles - prints the area of a circle in an isosceles triangle.
 * @side: side of triangle
 * @base: base of triangle
 * Return: area of circle
 */
float cirleInIsosceles(float side, float base)
{
    const float PI = 3.14;

    return (PI * pow(base, 2) / 4 * (2 * side - base) / (2 * side + base));
}