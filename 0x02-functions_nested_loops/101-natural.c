#include <stdio.h>

/**
 * main- Adds all natural numbers divisible by 3 & 5
 *
 * Return: (0) successful
 */

int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
			sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
