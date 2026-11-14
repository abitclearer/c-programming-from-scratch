#include <stdio.h>

int main()
{
    int n = 10;
    n += 5;         /* same as n = n + 5; */
    printf("%d\n", n);

    n = 10;
    n -= 2;         /* same as n = n - 2; */
    printf("%d\n", n);

    n = 10;
    n *= 3;
    printf("%d\n", n);

    n /= 4;
    printf("%d\n", n);

    n %= 4;
    printf("%d\n", n);
    return 0;
}

/* Output:
15
8
30
7
3
*/
