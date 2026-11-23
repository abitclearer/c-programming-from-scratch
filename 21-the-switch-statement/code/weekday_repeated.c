#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    case 1: printf("Weekday: class at 8\n"); break;
    case 2: printf("Weekday: class at 8\n"); break;
    case 3: printf("Weekday: class at 8\n"); break;
    case 4: printf("Weekday: class at 8\n"); break;
    case 5: printf("Weekday: class at 8\n"); break;
    case 6: printf("Weekend: sleep till 11\n"); break;
    case 7: printf("Weekend: sleep till 11\n"); break;
    }
    return 0;
}

/* Output (input: 4):
Weekday: class at 8
*/
