#include "main.h"

/**
  * more_numbers - prints 0-14 10 times
  *
  */

void more_numbers(void)
{
	int count;

	count = 1;

	while (count <= 10)
	{
		int num;

		num = 0;

		while (num <= 14)
		{
			if (num < 10)
			{
			_putchar(num + '0');
			}
			else
			{
				if (num >= 10)
				{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				}
			}
			num++;
		}
		_putchar('\n');
		count++;
	}
}
