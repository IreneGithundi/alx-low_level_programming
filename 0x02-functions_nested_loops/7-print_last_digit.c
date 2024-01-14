#include "main.h"

/**
 * print_last_digit- print last digit of a number
 * @x: input number
 * Return: (x) last digit of number
 */

int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	return (last_digit);
}
