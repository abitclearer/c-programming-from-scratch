#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    if (18 <= age && age <= 36)
        printf("Young adult\n");
    return 0;
}

/* Output (input: 25):
Young adult
*/
