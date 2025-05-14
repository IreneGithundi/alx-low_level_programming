#include "main.h"

/**
  * _strcat - Function that concatenates two strings
  * @dest: string to which new string is to be added to
  * @src: String that is to be concatenated
  *
  * Return: (dest) pointer to the concatenated string
  */

char *_strcat(char *dest, char *src)
{
	int i, index;

	i = 0;
	index = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	dest[i] = ' ';

	while (src[index] != '\0')
	{
		dest[i] = src[index];

		i++;
		index++;
	}

	dest[i] = '\0';

	return (dest);
}
