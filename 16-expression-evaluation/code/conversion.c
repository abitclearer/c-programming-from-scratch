#include <stdio.h>

int main()
{
    int n = 10;
    float f = 5.5f;
    printf("%f\n", n + f);   /* n is converted to float */
    return 0;
}

/* Output:
15.500000
*/
