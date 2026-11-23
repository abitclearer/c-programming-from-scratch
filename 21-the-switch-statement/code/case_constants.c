/* Any integer constant works after case: a number, a small
 * constant expression, or a character (a char is a small integer). */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 2;
    switch (day)
    {
    case 1: printf("Monday\n"); break;
    case 1 + 1: printf("Tuesday\n"); break;
    case 'A': printf("The letter A\n"); break;
    }
    return 0;
}

/* Output:
Tuesday
*/
