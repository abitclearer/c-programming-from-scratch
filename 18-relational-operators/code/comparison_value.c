#include <stdio.h>

int main()
{
    int r = (3 < 8);          /* true, so r is 1 */
    printf("%d\n", r);
    r = (3 > 8);              /* false, so r is 0 */
    printf("%d\n", r);
    return 0;
}

/* Output:
1
0
*/
