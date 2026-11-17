#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int total = 0;
    scanf("%d", &total);
    if (total >= 50)
        printf("Pay %d\n", total - 15);
    else if (total >= 30)
        printf("Pay %d\n", total - 8);
    else if (total >= 20)
        printf("Pay %d\n", total - 5);
    else
        printf("No discount\n");
    return 0;
}

/* Output (input: 64):
Pay 49
*/
