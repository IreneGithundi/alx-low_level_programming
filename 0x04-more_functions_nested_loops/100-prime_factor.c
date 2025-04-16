#include <stdio.h>

/**
  * main - Prints the largest prime factor of the number
  *
  * Return: Always (0) Successful
  */

int main(void)
{
	long int num;
	int i;

	num = 612852475143;
	i = 2;

	while (num > 1)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", i);

	return (0);
}
