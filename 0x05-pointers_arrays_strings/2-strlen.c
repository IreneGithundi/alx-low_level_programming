#include "main.h"

/**
  * _strlen - counts the length
  *
  * Return: (length of string)
  */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		++count;
		s++;
	}
	return (count);
}
