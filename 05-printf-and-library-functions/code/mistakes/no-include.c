// This file does not compile on purpose: the #include <stdio.h> line is commented out, so printf is not declared and the build fails.
//#include <stdio.h>

int main()
{
    printf("%d\n", 100);
    printf("%c\n", 'X');
    printf("%f\n", 3.14);
    return 0;
}
