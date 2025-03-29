#include <stdio.h>

/**
  * main - Print First 98 Fibonacci Numbers
  *
  * Return: Always (0) Successful
  */

int main(void)
{
	int count;
	long int num1, num2, fibonacci;

	count = 1;
	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);

	while (count <= 96)
	{
		fibonacci = num1 + num2;

		printf("%lu", fibonacci);

		if (count < 96)
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
