/* This file does not compile on purpose: block comments do not nest; the last closing marker is unmatched. */
#include <stdio.h>

int main(void)
{
    /*
    printf("%d\n", 100); /* integer */
    printf("%c\n", 'A');
    */
    printf("%f\n", 3.14159);
    return 0;
}
