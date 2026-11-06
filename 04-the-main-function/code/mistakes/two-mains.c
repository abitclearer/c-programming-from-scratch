// This file does not compile on purpose: it has two main functions, so the second one "already has a body".
#include <stdio.h>

int main()
{
    printf("hello C\n");
    return 0;
}

int main()
{
    return 0;
}
