#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

    /* Seed the random number generator with the current time */
srand(time(0));
    /* Generate a random number and assign it to 'n' */
n = rand() - RAND_MAX / 2;

    /**
     * Check if 'n' is negative, zero, or positive
     * and print the corresponding message
     */

printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}

return (0);
}
