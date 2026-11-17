#include <stdio.h>

int main()
{
    int x = 0;
    if (x == 5)              /* compares: x is 0, so this is false */
        printf("x == 5 is true\n");
    if (x = 5)               /* stores 5 in x; 5 is not zero, so always true */
        printf("x = 5 is true, x is now %d\n", x);
    return 0;
}

/* Output:
x = 5 is true, x is now 5
*/
