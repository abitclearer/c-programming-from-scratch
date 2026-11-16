#include <stdio.h>

int main()
{
    int i = 1;
    ++i;              /* i is 2 */
    int r = i;
    ++i;              /* i is 3 */
    r = r + i;
    ++i;              /* i is 4 */
    r = r + i;
    printf("%d\n", r);   /* 2 + 3 + 4 */
    return 0;
}

/* Output:
9
*/
