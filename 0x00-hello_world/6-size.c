#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int q;
	float w;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu bytes(s)\n",(unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(q));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(w));
	return (0);
}
