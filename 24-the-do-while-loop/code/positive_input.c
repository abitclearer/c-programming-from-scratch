#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("That's not a positive integer.\n");
    } while (n <= 0);
    int count = 0;
    do
    {
        count++;
        n /= 10;
    } while (n);
    printf("%d\n", count);
    return 0;
}

/* Output (input: -5 0 4):
Enter a positive integer: That's not a positive integer.
Enter a positive integer: That's not a positive integer.
Enter a positive integer: 1
*/
