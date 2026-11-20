#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (3 == n)               /* same as n == 3 */
        printf("%d\n", n);
    return 0;
}

/* Output (input: 3):
3
*/
