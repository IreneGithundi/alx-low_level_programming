#include <stdio.h>

/**
 * main- Print first 50 Fibonacci Numbers
 *
 * Return: (0) always successful
 */

int main(void)
{
	long int f = 1, s = 2, n;
	int c;

	for (c = 1; c <= 49; c++)
	{
		printf("%ld, ", f);
		n = f + s;
		f = s;
		s = n;
	}
	printf("%ld\n", f);
	return (0);
}
