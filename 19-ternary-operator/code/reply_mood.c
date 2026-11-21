#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int minutes = 0;
    scanf("%d", &minutes);
    printf("Mood: %s\n",
           minutes <= 1  ? "Instant reply! Good sign." :
           minutes <= 10 ? "Probably just busy." :
           minutes <= 60 ? "Maybe they missed it." :
                           "Stop waiting, go code.");
    return 0;
}

/* Output (input: 5):
Mood: Probably just busy.
*/
