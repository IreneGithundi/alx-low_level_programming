#include <stdio.h>

/**
 * main- Print first 50 Fibonacci Numbers
 *
 * Return: (0) always successful
 */

int main(void)
{
	int x, sum = 1;

	for (x = 1; x <= 50; x++)
	{
		sum = sum + 1;
		printf("%d, ", x);
		printf("%d,\n", sum);
	}
	return (0);
}
