#include <stdio.h>

int main()
{
    printf("abc\ndef\n");
    printf("abc\\ndef\n");
    printf("%c\n", '\'');
    printf("\"Hello\"\n");
    return 0;
}

/* Output:
abc
def
abc\ndef
'
"Hello"
*/
