#include <stdio.h>

int main()
{
    int a = 0;      /* initialization */
    a = 10;         /* assignment */
    printf("%d\n", a);

    char c1 = 'x';
    char c2 = 'y';
    c1 = c2;
    printf("%c\n", c1);

    a = 3;
    int b = 0;
    int c = 0;
    b = a + 3;      /* clearer than c = b = a + 3; */
    c = b;
    printf("%d %d\n", b, c);
    return 0;
}

/* Output:
10
y
6 6
*/
