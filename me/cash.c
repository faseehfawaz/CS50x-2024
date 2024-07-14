#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // asking user for amount of change owed (in cents)
    int change;
    do
    {
        change = get_int("Change owed (in cents): ");
    }
    while (change <= 0);

    // creating variable to keep track of coin used
    int coins = 0;
    // calcualting
    coins += change / 25;
    change %= 25;
    coins += change / 10;
    change %= 10;
    coins += change / 5;
    change %= 5; //
                 // remaining change
    coins += change;

    printf("%d\n", coins);

    return 0;
}
