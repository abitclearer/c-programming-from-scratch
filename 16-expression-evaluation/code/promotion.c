#include <stdio.h>

int main()
{
    char c = 100;
    short s = 2000;
    printf("%zu %zu\n", sizeof(c), sizeof(s));
    printf("%zu %zu\n", sizeof(c + s), sizeof(c + c));   /* both are int */

    char x = 100;
    char y = 100;
    printf("%d\n", x + y);   /* added as int, so no overflow */
    return 0;
}

/* Output:
1 2
4 4
200
*/
