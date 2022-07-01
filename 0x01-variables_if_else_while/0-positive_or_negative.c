#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This program checks if the value stored in the variable
 * 'n' is positive or negative
 * Return: 0 (Successs)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positiive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
