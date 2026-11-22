#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int month = 0;
    scanf("%d", &month);
    if (3 <= month <= 5)      /* (3 <= 8) is 1, and 1 <= 5 is true */
        printf("Spring\n");
    return 0;
}

/* Output (input: 8):
Spring
*/
