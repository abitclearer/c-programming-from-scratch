#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    c = (b = 4, a = b + 10, b = a + 1);
    printf("%d\n", c);
    return 0;
}

/* Output:
15
*/
