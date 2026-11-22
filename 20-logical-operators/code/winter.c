#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    if (12 == month || 1 == month || 2 == month)
        printf("Winter\n");
    return 0;
}

/* Output (input: 12):
Winter
*/
