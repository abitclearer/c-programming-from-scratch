#include <stdio.h>

int main()
{
    printf("%d\n", 3 + 4 * 5);      /* * goes before + */
    printf("%d\n", (3 + 4) * 5);    /* parentheses go first */
    printf("%d\n", 8 / 4 * 2);      /* same precedence: left to right */

    int b, c;
    c = b = 5;                      /* assignment: right to left */
    printf("%d %d\n", b, c);
    return 0;
}

/* Output:
23
35
4
5 5
*/
