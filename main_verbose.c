#include <unistd.h>
#include <stdio.h> // add stdio.h library for printf function

// Function to generate the grid
void rush(int x, int y);

// Function to check if a string only contains integers
int ft_integer_only(char *str)
{
    int output;
    int base;
    int deducted;

    deducted = 0;
    base = 1;
    while (*str != '\0')
    {
        // Check if the current character is not a digit
        if (*str < 48 || *str > 57)
            return (-1);

        // Move to the next character in the string
        str++;
        deducted++;
        base *= 10;
    }

    // Reset the pointer to the start of the string
    str -= deducted;
    output = 0;
    while (*str != '\0')
    {
        // Convert the character to an integer and add it to the output
        output += (*str - 48) * base;

        // Move to the next character in the string
        base /= 10;
        str++;
    }
    return (output);
}

int main(int argc, char *argv[])
{
    int i_col;
    int i_row;

    // Set default values for the grid size
    i_col = 5;
    i_row = 5;

    // Check if the program was called with command-line arguments
    if (argc == 1)
    {
        printf("No arguments provided. Using default values.\n");
        rush(i_col, i_row);
    }
    else if (argc == 3)
    {
        // Attempt to parse the command-line arguments as integers
        i_col = ft_integer_only(argv[1]);
        i_row = ft_integer_only(argv[2]);

        // Check if the input arguments are valid integers
        if (i_col == -1 || i_row == -1)
        {
            printf("Invalid input. Please enter integers only.\n");
        }
        else
        {
            printf("Generating grid with dimensions %d x %d.\n", i_col, i_row);
            rush(i_col, i_row);
            return (0);
        }
    }
    else
    {
        printf("Incorrect number of arguments provided. Usage: column row\n");
    }

    // Return 0 to indicate that the program ran successfully
    return (0);
}
