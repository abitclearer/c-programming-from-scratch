/* This file does not compile on purpose: the expression after switch
 * must have an integer type (error C2050: switch expression not integral). */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    float day = 2;
    switch (day)
    {
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    }
    return 0;
}
