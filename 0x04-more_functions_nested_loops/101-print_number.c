#include "main.h"

/**
  * print_number - Prints an Integer
  * @n: Number that is to be printed
  */

void print_number(int n)
{
	int p_value;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	p_value = 1;

	if (n >= 0)
	{
		while ((n / p_value) >= 10)
		{
			p_value = p_value * 10;
		}

		while (p_value > 0)
		{
			_putchar((n / p_value) + '0');
			n = n % p_value;
			p_value = p_value / 10;
		}

	}
}
