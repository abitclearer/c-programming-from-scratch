#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    for (b = 0, a = 10; b < a; b++, a--)
    {
        printf("b = %d, a = %d\n", b, a);
    }
    return 0;
}

/* Output:
b = 0, a = 10
b = 1, a = 9
b = 2, a = 8
b = 3, a = 7
b = 4, a = 6
*/
