#include <unistd.h>
#include <stdio.h> // add stdio.h library for printf function

int             ft_putchar(char c);

// Function to print a row of characters
void ft_print_manager(int x, char start, char mid, char end)
{
    // Print the start character
    ft_putchar(start);

    // Print the middle characters
    x--;
    while (x > 1)
    {
        ft_putchar(mid);
        x--;
    }

    // Print the end character (if there is one)
    if (x > 0)
        ft_putchar(end);

    // Print a newline character to move to the next line
    ft_putchar('\n');
}



// Function to generate the grid
void rush(int x, int y)
{
    if (x > 0 && y > 0)
    {
        // Print the top row of the grid
        printf("Printing top row of grid with width %d.\n", x);
        ft_print_manager(x, 'o', '-', 'o');

        // Print the middle rows of the grid
        printf("Printing middle rows of grid with width %d and height %d.\n", x, y-2);
        y--;
        while (y > 1)
        {
            ft_print_manager(x, '|', ' ', '|');
            y--;
        }

        // Print the bottom row of the grid (if there is one)
        if (y > 0)
        {
            printf("Printing bottom row of grid with width %d.\n", x);
            ft_print_manager(x, 'o', '-', 'o');
        }
    }
}
