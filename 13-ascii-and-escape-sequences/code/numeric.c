#include <stdio.h>

int main()
{
    printf("%c\n", '\130');   // octal 130 = 88 = 'X'
    printf("%c\n", '\x30');   // hex 30 = 48 = '0'
    return 0;
}

/* Output:
X
0
*/
