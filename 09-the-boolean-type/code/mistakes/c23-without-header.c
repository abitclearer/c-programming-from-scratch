/* This file does not compile on purpose: bool and true are keywords only in C23, and the
   C compiler in Visual Studio 2026 does not support them yet, so stdbool.h is still needed. */
#include <stdio.h>

int main()
{
    bool flag = true;
    if (flag)
        printf("I like C\n");
    return 0;
}
