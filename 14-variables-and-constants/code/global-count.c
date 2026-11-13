#include <stdio.h>

int count = 100;

void show()
{
    printf("count = %d\n", count);
}

int main()
{
    show();
    count = 200;
    show();
    return 0;
}

/* Output:
count = 100
count = 200
 */
