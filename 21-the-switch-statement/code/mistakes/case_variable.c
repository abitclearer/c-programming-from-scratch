/* This file does not compile on purpose: n is a variable, and a case label
 * must be an integer constant (error C2051: case expression not constant). */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 2;
    int n = 2;
    switch (day)
    {
    case 1: printf("Monday\n"); break;
    case n: printf("Tuesday\n"); break;
    }
    return 0;
}
