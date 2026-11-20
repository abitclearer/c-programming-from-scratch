#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    if (18 <= age <= 36)      /* (18 <= 46) is 1, and 1 <= 36 is true */
        printf("Young adult\n");
    return 0;
}

/* Output (input: 46):
Young adult
*/
