#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int has_key = 1;
    int hp = 50;
    int cursed = 0;
    if (has_key && hp >= 30 || cursed)
        printf("The hidden room opens.\n");
    else
        printf("The door stays shut.\n");
    return 0;
}

/* Output:
The hidden room opens.
*/
