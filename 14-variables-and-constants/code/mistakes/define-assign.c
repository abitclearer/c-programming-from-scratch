/* This file does not compile on purpose:
 * M is a #define constant, not a variable, so it cannot be assigned */
#include <stdio.h>

#define M 100

int main()
{
    M = 200;
    printf("%d\n", M);
    return 0;
}
