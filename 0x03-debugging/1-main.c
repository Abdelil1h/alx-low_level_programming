#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function demonstrates how to avoid an infinite loop.
 * It prints a message before and after the loop, but the loop itself is commented out
 * to prevent it from running indefinitely.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");
    i = 0;

    /* 
    while (i < 10)
    {
        putchar(i);
    }
    */

    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
