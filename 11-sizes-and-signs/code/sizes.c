#include <stdio.h>

int main()
{
    printf("char: %zu\n", sizeof(char));
    printf("_Bool: %zu\n", sizeof(_Bool));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    return 0;
}

/* Output:
char: 1
_Bool: 1
short: 2
int: 4
long: 4
long long: 8
float: 4
double: 8
long double: 8
*/
