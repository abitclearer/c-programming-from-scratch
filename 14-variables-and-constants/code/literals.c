#include <stdio.h>

int main()
{
    printf("%d\n", 37);
    printf("%d\n", 037);
    printf("%d\n", 0x1F);
    printf("%f\n", 1.2e3);
    return 0;
}

/* Output:
37
31
31
1200.000000
 */
