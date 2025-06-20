#include <cs50.h>
#include <stdio.h>

// Functional declaration
void print_row(int row, int height);

int main(void)
{
    int height;
    do
    { // Repeat input until user enters a number from 1 to 8

        height = get_int("Height: "); // input
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height); // call
    }

    return 0;
}

void print_row(int row, int height)
{
    int spaces = height - row;
    // Print the spaces (so that the pyramid is right-aligned)

    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < row; i++)
    {
        printf("#");
    }
    printf("  "); // make buffer space

    for (int i = 0; i < row; i++) // greats second Pyramde
    {
        printf("#");
    }
    printf("\n");
}