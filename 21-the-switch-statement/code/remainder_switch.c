#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    switch (num % 3)
    {
    case 0:
        printf("The remainder is 0\n");
        break;
    case 1:
        printf("The remainder is 1\n");
        break;
    case 2:
        printf("The remainder is 2\n");
        break;
    }
    return 0;
}

/* Output (input: 7):
The remainder is 1
*/
