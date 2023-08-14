#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("id is positive\n", n);
	else if (n == 0)
		printf("id i zero\n", n);
	else
		printf("id is positive\n", n);
	return (0);
}
