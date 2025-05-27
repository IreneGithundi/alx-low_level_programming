#include "main.h"

/**
* reverse_array - Function that reverses the content of an array of integers
* @a: The array to be reversed
* @n: The number of elements in the array
* Return: Void
*/
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a;
	int swap = 0;

	if (n > 0)
	{
	while (*end != a[n-1])
	{
		end++;
	}

	while (start < end)
	{
		swap = *start;
		*start = *end;
		*end = swap;

		start++;
		end--;
	}
	}
}
