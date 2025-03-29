#include <stdio.h>

/**
  * main - Adds even number Fibonacci. Sum < 4 mill
  *
  * Return: Always (0);
  */

int main(void)
{
	long int num1, num2, fibonacci, sum_even;

	num1 = 1;
	num2 = 2;
	sum_even = 0;

	while (num2 <= 4000000)
	{
		fibonacci = num1 + num2;

		if (num2 % 2 == 0)
		{
			sum_even += num2;
		}

		num1 = num2;
		num2 = fibonacci;
	}
	printf("%lu\n", sum_even);
	return (0);
}
