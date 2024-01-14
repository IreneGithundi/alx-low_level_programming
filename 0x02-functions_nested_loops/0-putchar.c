#include <unistd.h>
#include "main.h"

/**
 * main- prints _putchar
 *
 * Return: (0) on success
 */

int main(void)
{
	char word[] = "_putchar";
	unsigned long int i;


	for (i = 0; i < sizeof(word) - 1; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
