#include "main.h"
/**
 * cirAreaCircum - prints circle area after calculating it
 * using circumference.
 * 
 * Return: Area
 */
float cirAreaCircum(float circum)
{
    const float PI = 3.14;

    return(pow(circum, 2) / (4 * PI));
}