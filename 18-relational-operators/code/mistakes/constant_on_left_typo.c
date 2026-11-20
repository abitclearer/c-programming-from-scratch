/* This file does not compile on purpose:
 * 3 = n tries to store n into the number 3, and a constant is not an l-value */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (3 = n)
        printf("%d\n", n);
    return 0;
}
