#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    do
    {
        count++;
        n /= 10;
    } while (n);
    printf("%d\n", count);
    return 0;
}

/* Output (input: 1234):
4
*/
