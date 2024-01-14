#include "main.h"

/**
 * print_last_digit- print last digit of a number
 * @x: input number
 * Return: (x) last digit of number
 */

int print_last_digit(int x)
{
	if (x >= 0)
	{
		return(x % 10);
	}
	else
	{
		x = -x;
		return(x % 10);
	}
}
