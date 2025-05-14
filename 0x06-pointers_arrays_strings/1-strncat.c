#include "main.h"

/**
  * _strncat - Function that concatenates 2 strings n bytes from src to dest
  * @dest: the string that is added to from src
  * @src: the string that is being copied to dest
  * @n: The number of bytes that's to be copied
  *
  * Return: (dest) now concatenated
  */

char *_strncat(char *dest, char *src, int n)
{
	int index, i;

	index = 0;
	i = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[index] = src[i];
		}
		else
		{
			break;
		}

		i++;
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
