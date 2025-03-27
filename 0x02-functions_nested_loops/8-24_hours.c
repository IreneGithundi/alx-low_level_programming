#include "main.h"

/**
 * jack_bauer - Prints very min of Jack Bauer from 00:00 to 23:59
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	minute = 0;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}

		minute = 0;
		hour++;
	}

}
