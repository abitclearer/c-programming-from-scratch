#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    if (month >= 3 && month <= 5)
        printf("Spring\n");
    return 0;
}

/* Output (input: 4):
Spring
*/
