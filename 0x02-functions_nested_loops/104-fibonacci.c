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

    printf("%lu, %lu", num1, num2);

    for (i = 2; i < 98; i++)
    {
        fib = num1 + num2;
        printf(", %lu", fib);

        num1 = num2;
        num2 = fib;
    }

    printf("\n");

    return 0;
}














































