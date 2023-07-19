#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int num1 = 1, num2 = 2, fib;
    int i;

    printf("%lu", num1);

    for (i = 0; i < 97; i++)
    {
        printf(", %lu", num2);
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }

    printf("\n");

    return 0;
}








































































