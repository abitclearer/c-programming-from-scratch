/* This file does not compile on purpose:
 * i was created inside the for, so it doesn't exist after the loop */
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n%d\n", i);
    return 0;
}
