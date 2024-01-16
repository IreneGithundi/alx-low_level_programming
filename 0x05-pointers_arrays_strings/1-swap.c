#include "main.h"

/**
 * swap_int- Swaps the values of 2 ints
 * @a: The first int to be swapped
 * @b: The second int to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
