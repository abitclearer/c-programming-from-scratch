#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
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

/* Output (input: 3):
Weekday: class at 8
*/
