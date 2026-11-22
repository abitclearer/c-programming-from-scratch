#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int i = 0, a = 1, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;      /* i is 1 */
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}

/* Output:
2 3 3 5
*/
