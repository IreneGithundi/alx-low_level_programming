#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints elements of an array of integers n times
  * @a: The array of integers to be printed
  * @n: The number of elements of the array to be printed
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
