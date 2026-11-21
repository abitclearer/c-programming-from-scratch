#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", (num1 > num2 ? num1 : num2));
    return 0;
}

/* Output (input: -10 -20):
-10
*/
