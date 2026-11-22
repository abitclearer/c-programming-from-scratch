#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    char player = 'R';      /* R rock, P paper, S scissors */
    char computer = 'S';
    if (player == computer)
        printf("Draw\n");
    else if ((player == 'R' && computer == 'S') ||
             (player == 'S' && computer == 'P') ||
             (player == 'P' && computer == 'R'))
        printf("You win!\n");
    else
        printf("Computer wins!\n");
    return 0;
}

/* Output:
You win!
*/
