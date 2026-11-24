#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 2;
    while (i <= n)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

/* Output (input: 20):
2 4 6 8 10 12 14 16 18 20 
*/
