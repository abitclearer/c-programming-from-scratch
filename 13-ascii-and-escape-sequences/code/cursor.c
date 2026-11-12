#include <stdio.h>

int main()
{
    printf("abcdef\b\bxyz\n");   // backspace twice, then overwrite
    printf("abcdef\rxy\n");      // back to the start of the line
    printf("a\tb\tc\n");         // tab stops every 8 columns
    printf("ab\tcd\tef\n");
    printf("abc\tdef\tghi\n");
    return 0;
}

/* In the console window this shows:
abcdxyz
xycdef
a       b       c
ab      cd      ef
abc     def     ghi
*/
