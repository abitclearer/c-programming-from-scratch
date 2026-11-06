// The working half of the naming example: int is the keyword (the type), num is our own name.
// In the video the line is just "int num;". Here num also gets a value and is printed,
// because cl /W4 warns about a variable that is never used.
#include <stdio.h>

int main()
{
    int num = 42;
    printf("%d\n", num);
    return 0;
}

/* Output:
42
*/
