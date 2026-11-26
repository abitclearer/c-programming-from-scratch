#include <stdio.h>

int main()
{
    double money = 10000;
    int year = 0;
    for (year = 1; year <= 5; year++)
    {
        money *= 1.03;
        printf("Year %d: %.2f\n", year, money);
    }
    return 0;
}

/* Output:
Year 1: 10300.00
Year 2: 10609.00
Year 3: 10927.27
Year 4: 11255.09
Year 5: 11592.74
*/
