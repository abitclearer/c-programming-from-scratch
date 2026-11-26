#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    for (i = 3; i <= 100; i += 3)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

/* Output:
1683
*/
