#include <stdio.h>

int main()
{
    // every printable ASCII character, from 32 (space) to 126 (~)
    for (int c = 32; c <= 126; c++)
        printf("%c", c);
    printf("\n");
    return 0;
}

/* Output:
 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
*/
