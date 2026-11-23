/* default can go first, but without its break, C falls through
 * from default into case 1 and keeps going until case 5's break. */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    default:
        printf("Input error, please enter a number from 1 to 7\n");
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: printf("Weekday: class at 8\n"); break;
    case 6:
    case 7: printf("Weekend: sleep till 11\n"); break;
    }
    return 0;
}

/* Output (input: 8):
Input error, please enter a number from 1 to 7
Weekday: class at 8
*/
