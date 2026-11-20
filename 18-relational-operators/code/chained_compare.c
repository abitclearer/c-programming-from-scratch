#include <stdio.h>

int main()
{
    int i = 2;
    int j = 4;
    int k = 3;
    if (i < j < k)            /* (2 < 4) is 1, then 1 < 3 is true */
        printf("In order\n");
    return 0;
}

/* Output:
In order
*/
