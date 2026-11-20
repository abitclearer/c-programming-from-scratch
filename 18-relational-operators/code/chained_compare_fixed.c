#include <stdio.h>

int main()
{
    int i = 2;
    int j = 4;
    int k = 3;
    if (i < j && j < k)       /* 4 < 3 is false, so the whole condition is false */
        printf("In order\n");
    return 0;
}

/* Output:
*/
