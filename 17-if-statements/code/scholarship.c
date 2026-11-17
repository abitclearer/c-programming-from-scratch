#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int score = 0;
    int failed = 0;     /* 1 if the student failed a class */
    int warning = 0;    /* 1 if the student had a warning */
    scanf("%d %d %d", &score, &failed, &warning);

    if (score >= 85)
    {
        if (failed == 0)
        {
            if (warning == 0)
                printf("Scholarship!\n");
            else
                printf("Got a warning\n");
        }
        else
        {
            printf("Failed a class\n");
        }
    }
    else
    {
        printf("Score too low\n");
    }
    return 0;
}

/* Output (input: 98 0 0):
Scholarship!
*/
