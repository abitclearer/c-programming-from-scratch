#include <stdio.h>

int main()
{
    if (0)
        printf("0 is true\n");
    if (1)
        printf("1 is true\n");
    if (2)
        printf("2 is true\n");
    if (100)
        printf("100 is true\n");
    if (-1)
        printf("-1 is true\n");
    return 0;
}

/* Output:
1 is true
2 is true
100 is true
-1 is true
*/
