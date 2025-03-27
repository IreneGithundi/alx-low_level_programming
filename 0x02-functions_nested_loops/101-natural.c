#include <stdio.h>

/**
 * main - Computes and Prints sum of 3 & 5 multiples
 * between 0 to 1024.
 *
 * Return: Always (0) Successful
 */

int main(void)
{
	int n, sum;

	n = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
