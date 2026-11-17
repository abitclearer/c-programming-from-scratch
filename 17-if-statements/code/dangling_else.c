#include <stdio.h>

int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
        if (b == 2)
            printf("Hello\n");
    else                      /* lined up with the first if, but it pairs with the second */
        printf("Bye\n");
    return 0;
}

/* Output:
*/
