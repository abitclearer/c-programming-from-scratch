#include <stdio.h>

int main()
{
    int n = (int)3.14;       /* keeps the whole number part */
    printf("%d\n", n);

    int a = 5;
    int b = 2;
    printf("%d\n", a / b);                 /* int / int */
    printf("%f\n", (double)a / b);         /* cast first, then divide */
    printf("%f\n", (double)(a / b));       /* too late: a / b is already 2 */
    return 0;
}

/* Output:
3
2
2.500000
2.000000
*/
