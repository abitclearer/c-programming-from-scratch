/* This file does not compile on purpose: short only modifies integer types, so short float is illegal. */
#include <stdio.h>

int main()
{
    short int temperature = -5;
    unsigned char level = 200;
    short float weight = 1.5;
    printf("%d\n", temperature);
    printf("%d\n", level);
    return 0;
}
