#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98- Prints natural number from 0 t0 98
 * @n: input number
 * Return: null
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
