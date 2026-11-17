#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int score = 0;
    scanf("%d", &score);
    if (score >= 60)
    {
        printf("Pass\n");
        printf("Party time!\n");   /* inside the braces: only runs on a pass */
    }
    else
    {
        printf("Retake\n");
    }
    return 0;
}

/* Output (input: 98):
Pass
Party time!
*/
