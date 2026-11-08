/* This file does not compile on purpose: true is not defined without #include <stdbool.h>. */
#include <stdio.h>

int main()
{
    _Bool flag = true;
    if (flag)
        printf("I like C\n");
    return 0;
}
