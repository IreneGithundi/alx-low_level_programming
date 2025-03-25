#include "main.h"

/**
 * jack_bauer - Prints very min of Jack Bauer from 00:00 to 23:59
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int a, b;

	a = 0;
	b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}

		b = 0;
		a++;
	}

}
