#include <stdio.h>
#include <string.h>

int main()
{
    printf("%zu\n", strlen("abcdef"));
    printf("%zu\n", strlen("C:\apps\test\007\new.c"));
    printf("C:\test\test.c\n");
    printf("C:\\test\\test.c\n");
    return 0;
}

/* Output:
6
16
C:	est	est.c
C:\test\test.c
*/
