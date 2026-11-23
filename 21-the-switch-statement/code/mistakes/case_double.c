/* This file does not compile on purpose: 1.0 is a constant, but not an integer
 * (error C2052: 'double': illegal type for case expression). */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 2;
    switch (day)
    {
    case 1.0: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    }
    return 0;
}
