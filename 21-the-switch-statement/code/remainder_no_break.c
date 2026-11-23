/* This one builds and runs, but it has a bug: there is no break,
 * so after case 1, C falls through into case 2 as well. */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    switch (num % 3)
    {
    case 0:
        printf("The remainder is 0\n");
    case 1:
        printf("The remainder is 1\n");
    case 2:
        printf("The remainder is 2\n");
    }
    return 0;
}

/* Output (input: 7):
The remainder is 1
The remainder is 2
*/
