/* This file does not compile on purpose:
 * block comments cannot be nested */
#include <stdio.h>

int main(void)
{
    /* Outer comment begins
       /* Inner comment */
       residual text triggers a syntax error */
    return 0;
}
