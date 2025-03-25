#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: starting number
 *
 * Return: (void)
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
		n++;
	}
	while (n >= 98) 
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
		n--;
	}
	printf("\n");
}
