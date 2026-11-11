#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("LLONG_MAX: %lld\n", LLONG_MAX);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MAX: %e\n", DBL_MAX);
    return 0;
}

/* Output:
INT_MIN: -2147483648
INT_MAX: 2147483647
UINT_MAX: 4294967295
LLONG_MAX: 9223372036854775807
FLT_MAX: 3.402823e+38
DBL_MAX: 1.797693e+308
*/
