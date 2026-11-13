/* This file does not compile on purpose:
 * num is a local variable that is used before it gets a value
 * (Visual Studio projects turn warning C4700 into an error) */
#include <stdio.h>

int main()
{
    int num;
    printf("%d\n", num);
    return 0;
}
