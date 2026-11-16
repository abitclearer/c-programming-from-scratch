#include <stdio.h>

/* Undefined behavior: i is changed three times in one expression.
   Visual Studio 2026 prints 12, GCC prints 10 and Clang prints 9.
   Don't write code like this; see steps.c. */
int main()
{
    int i = 1;
    int r = (++i) + (++i) + (++i);
    printf("%d\n", r);
    return 0;
}

/* Output:
12
*/
