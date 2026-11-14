#include <stdio.h>

int main()
{
    int n = 10;
    int m = n++;    /* use n first, then add 1 */
    printf("n = %d, m = %d\n", n, m);

    n = 10;
    m = ++n;        /* add 1 first, then use n */
    printf("n = %d, m = %d\n", n, m);

    n = 10;
    m = n--;
    printf("n = %d, m = %d\n", n, m);

    n = 10;
    m = --n;
    printf("n = %d, m = %d\n", n, m);
    return 0;
}

/* Output:
n = 11, m = 10
n = 11, m = 11
n = 9, m = 10
n = 9, m = 9
*/
