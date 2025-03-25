#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @a: input number
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		return ((a % 10) * -1);
	}
	else
		return (a % 10);
}
