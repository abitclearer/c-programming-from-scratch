#include <stdio.h>

int main()
{
    printf("%d\n", 9 / 2);
    printf("%d\n", 9 % 2);

    printf("%d\n", 11 % -5);
    printf("%d\n", -11 % -5);
    printf("%d\n", -11 % 5);

    printf("%d\n", 123 % 10);
    printf("%d\n", 123 % 100);
    return 0;
}

/* Output:
4
1
1
-1
-1
3
23
*/
