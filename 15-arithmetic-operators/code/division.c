#include <stdio.h>

int main()
{
    printf("%d\n", 8 / 2);

    float z = 9 / 2;     /* integer division: 9 / 2 is 4 */
    printf("%f\n", z);

    z = 9.0f / 2;        /* one float operand: 4.5 */
    printf("%f\n", z);
    return 0;
}

/* Output:
4
4.000000
4.500000
*/
