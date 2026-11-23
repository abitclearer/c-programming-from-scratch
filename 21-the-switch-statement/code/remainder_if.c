#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num % 3 == 0)
        printf("The remainder is 0\n");
    else if (num % 3 == 1)
        printf("The remainder is 1\n");
    else
        printf("The remainder is 2\n");
    return 0;
}

/* Output (input: 7):
The remainder is 1
*/
