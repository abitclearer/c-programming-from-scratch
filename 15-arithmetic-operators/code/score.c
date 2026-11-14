#include <stdio.h>

int main()
{
    int score = 5;
    score = score / 20 * 100;    /* 5 / 20 is 0, and 0 * 100 is 0 */
    printf("%d\n", score);

    int points = 5;
    double percent = points / 20.0 * 100;
    printf("%f\n", percent);
    return 0;
}

/* Output:
0
25.000000
*/
