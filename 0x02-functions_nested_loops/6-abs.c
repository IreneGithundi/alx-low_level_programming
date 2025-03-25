#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @a: input integer
 *
 * Return: (0) Successful
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
		return (a * -1);
}
