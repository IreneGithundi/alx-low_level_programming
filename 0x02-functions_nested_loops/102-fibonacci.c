#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always (0) Successful
 */

int main(void)
{
	int count;
	long int num1, num2, fibonacci;

	count = 0;
	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);
	while (count < 50)
	{
		fibonacci = num1 + num2;

		printf("%lu", fibonacci);
		if (count < 49)
		{
			printf(", ");
		}

		count++;
		num1 = num2;
		num2 = fibonacci;
	}
	printf("\n");
	return (0);
}
