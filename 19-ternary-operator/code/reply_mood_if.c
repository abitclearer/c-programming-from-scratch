#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int minutes = 0;
    scanf("%d", &minutes);
    if (minutes <= 1)
        printf("Mood: Instant reply! Good sign.\n");
    else if (minutes <= 10)
        printf("Mood: Probably just busy.\n");
    else if (minutes <= 60)
        printf("Mood: Maybe they missed it.\n");
    else
        printf("Mood: Stop waiting, go code.\n");
    return 0;
}

/* Output (input: 90):
Mood: Stop waiting, go code.
*/
