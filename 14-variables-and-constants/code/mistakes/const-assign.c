/* This file does not compile on purpose:
 * num is a const variable, so it cannot be assigned after initialization */
#include <stdio.h>

int main()
{
    const int num = 0;
    printf("%d\n", num);
    num = 100;
    printf("%d\n", num);
    return 0;
}
