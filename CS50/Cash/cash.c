#include <cs50.h>
#include <stdio.h>
// Functions for calculating the number of coins per type

int calculate_quarters(int cents); // 25 Cents
int calculate_dimes(int cents);    // 10 Cents
int calculate_nickels(int cents);  // 5 Cents
int calculate_pennies(int cents);  // 1 Cent

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: "); // Prompt user to enter a valid amount of change
    }
    while (cents < 0);

    int quarters =
        calculate_quarters(cents); // Calculate the number of quarters (from he CS50 problem set)
    cents = cents - (quarters * 25);
    // line 22 is a rip-off of the function above CS50

    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);
    // The total number of coins results from the sum of all previously calculated coin values.
    // Since the largest possible number per coin type was used (greedy algorithm),
    // this sum is the minimum number of coins for the given amount.

    int total_conis = quarters + dimes + nickels + pennies;
    printf("total_conis: %i?\n",total_conis);
}

int calculate_quarters(int cents) //=25
{
    int number = 0;
    while (cents >= 25) // Greedy algotrithm from the CS50 problem set
    // This function calculates the number of quarters in the given cents
    {
        number++;
        cents = cents - 25;
    }
    return number;
}

int calculate_dimes(int cents) //=10 adaptation from greedy algorithm
{
    int number = 0;
    while (cents >= 10)
    {
        number++;
        cents = cents - 10;
    }
    return number;
}

int calculate_nickels(int cents) // 05
{
    int number = 0;
    while (cents >= 05)
    {
        number++;
        cents = cents - 05;
    }
    return number;
}

int calculate_pennies(int cents)
{
    int number = 0;
    while (cents >= 1)
    {
        number++;
        cents -= 1;
    }
    return number;
}
