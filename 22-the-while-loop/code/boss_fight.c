#include <stdio.h>

int main()
{
    int hp = 1000;
    while (hp > 0)
    {
        int damage = hp < 150 ? hp : 150;
        printf("You hit the boss for %d damage. ", damage);
        hp -= damage;
        printf("Boss HP: %d\n", hp);
    }
    printf("The boss is down! It dropped a legendary item.\n");
    return 0;
}

/* Output:
You hit the boss for 150 damage. Boss HP: 850
You hit the boss for 150 damage. Boss HP: 700
You hit the boss for 150 damage. Boss HP: 550
You hit the boss for 150 damage. Boss HP: 400
You hit the boss for 150 damage. Boss HP: 250
You hit the boss for 150 damage. Boss HP: 100
You hit the boss for 100 damage. Boss HP: 0
The boss is down! It dropped a legendary item.
*/
