#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * This program generates and prints the first 98 Fibonacci numbers. The Fibonacci
 * sequence is a series of numbers in which each number is the sum of the two preceding
 * ones. The sequence starts with 1 and 2. The program handles large Fibonacci numbers
 * by dividing them into two parts: a higher order part (`aft1`) and a lower order part (`aft2`).
 * The program prints the Fibonacci numbers separated by commas and followed by a space.
 * For numbers greater than or equal to 1 billion, leading zeros are added to the lower order
 * part to maintain consistent formatting.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int i;
    unsigned long int bef = 1;
    unsigned long int aft = 2;
    unsigned long int l = 1000000000;
    unsigned long int bef1;
    unsigned long int bef2;
    unsigned long int aft1;
    unsigned long int aft2;

    printf("%lu", bef);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", aft);
        aft += bef;
        bef = aft - bef;
    }

    bef1 = bef / l;
    bef2 = bef % l;
    aft1 = aft / l;
    aft2 = aft % l;

    for (i = 92; i < 99; ++i)
    {
        printf(", %lu%09lu", aft1, aft2);
        aft1 = aft1 + bef1;
        bef1 = aft1 - bef1;
        aft2 = aft2 + bef2;
        bef2 = aft2 - bef2;
    }

    printf("\n");
    return 0;
}















































































