#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
        printf("%d ", n % 10);
        n /= 10;
    }
    return 0;
}

/* Output (input: 1234):
4 3 2 1 
*/
