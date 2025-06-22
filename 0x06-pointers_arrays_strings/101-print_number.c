#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: The number that is to be printed
 * Return: Void
 */

void print_number(int n)
{
	int temp = n;
	int num_digits = 0;
	int divisor = 1;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
