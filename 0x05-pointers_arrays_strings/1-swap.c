#include <stdio.h>

/**
  * swap_int- swaps values of 2 ints
  * @a: First int
  * @b: Second int
  * Return: Void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
