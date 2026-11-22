#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("%d is a leap year\n", year);
    else if (year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}

/* Output (input: 2000):
2000 is a leap year
*/
