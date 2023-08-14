#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Return: 0 always
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greaterthan 5", n, m);
	else if (m == 0)
		printf("Last digit of %s is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is 0", n, m);
	printf("\n");
	return (0);
}
