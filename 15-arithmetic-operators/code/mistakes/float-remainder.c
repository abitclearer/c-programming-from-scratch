/* This file does not compile on purpose:
 * the % operator only works with integers */
#include <stdio.h>

int main()
{
    float x = 9.0f;
    int r = x % 2;
    printf("%d\n", r);
    return 0;
}
