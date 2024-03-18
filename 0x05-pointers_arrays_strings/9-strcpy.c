#include "main.h"

/**
  * *_strcpy- Copies string by srcc to dest
  * @dest: the destination
  * @src: the source
  * Return: 1 when successful a character
  */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';

	return (start);
}
