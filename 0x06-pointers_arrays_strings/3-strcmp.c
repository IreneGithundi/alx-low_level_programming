#include "main.h"

/**
  * _strcmp- compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: a positive, negative, or O 
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
