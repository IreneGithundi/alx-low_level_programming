#include <unistd.h>
#include "main.h"

/**
 * _abs- Computes absolute value of int
 *@x: input value
 *Return: (x) absolute value
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
