#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("int8_t: %zu\n", sizeof(int8_t));
    printf("int16_t: %zu\n", sizeof(int16_t));
    printf("int32_t: %zu\n", sizeof(int32_t));
    printf("int64_t: %zu\n", sizeof(int64_t));
    return 0;
}

/* Output:
int8_t: 1
int16_t: 2
int32_t: 4
int64_t: 8
*/
