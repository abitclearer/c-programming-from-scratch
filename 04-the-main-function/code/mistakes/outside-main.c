// This file does not compile on purpose: the printf statement sits outside main, above int main, instead of inside a function body.
#include <stdio.h>

printf("hello C\n");

int main()
{
    return 0;
}
