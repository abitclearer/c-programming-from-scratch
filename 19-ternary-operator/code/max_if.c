#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    int max = 0;
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    printf("%d\n", max);
    return 0;
}

/* Output (input: -10 -20):
-10
*/
