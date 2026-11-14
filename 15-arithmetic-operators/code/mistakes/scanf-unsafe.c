/* This file does not compile on purpose:
 * Visual Studio treats scanf as unsafe (error C4996) unless
 * #define _CRT_SECURE_NO_WARNINGS 1 is the first line of the file */
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
