#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);

    double avg = (num1 + num2) / 2.0;
    printf("%lf\n", avg);
    printf("%.1lf\n", avg);
    return 0;
}

/* Output (input: 10 5):
7.500000
7.5
*/
