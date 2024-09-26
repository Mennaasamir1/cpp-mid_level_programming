#include "main.h"
/**
 * CircleInArbitrary - prints circle area, the circle is described around
 * an arbitrary triangle.
 * @a: side1
 * @b: side2 of the triangle
 * @c: base of triangle
 * Return: area of the circle.
 */
float CircleInArbitrary(float a, float b, float c)
{
    float TriangleArea, Area;
    const float PI = 3.14;

    TriangleArea = (a + b + c) / 2;
    Area = (a * b * c) / (4 * sqrt(TriangleArea * (TriangleArea - a) * (TriangleArea - b) * (TriangleArea - c)));
    Area = PI * pow(Area, 2);

    return Area;
}