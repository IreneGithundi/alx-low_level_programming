#include <stdio.h>

/**
  * main - Adds even number Fibonacci. Sum < 4 mill
  * 
  * Return: Always (0);
  */

int main(void)
{
	long int num1, num2, fibonacci;

	num1 = 1;
	num2 = 2;
	fibonacci = num1 + num2;

	while (fibonacci <= 4000000)
	{
		if ((num1 % 2 == 0) && (num2 % 2 == 0))
		{
			printf("%lu", fibonacci);
		}
		if (fibonacci < 4000000)
		{
			printf(", ");
		}
		fibonacci += fibonacci;
		num1 = num2;
		num2 = fibonacci;
	}
	printf("\n");
	return (0);
}
