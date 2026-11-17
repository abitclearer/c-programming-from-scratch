#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}

/* Output (input: 7):
Odd
*/
