#include <stdio.h>

/**
  *print_array- Print elements of an array of ints
  * @a: The array input
  * @n: The number of inputs
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
