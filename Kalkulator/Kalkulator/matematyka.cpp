#include <string.h>
#include <ctype.h>
#include <stdio.h>
float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    if (b == 0) printf_s("\nNo nie da rady");
    else return a / b;
}