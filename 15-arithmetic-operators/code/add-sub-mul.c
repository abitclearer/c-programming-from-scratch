#include <stdio.h>

int main()
{
    int a = 10;
    int b = 22;
    printf("%d\n", a + b);

    int c = a + b;
    printf("%d\n", c);

    printf("%d\n", a - b);
    printf("%d\n", a * b);
    return 0;
}

/* Output:
32
32
-12
220
*/
