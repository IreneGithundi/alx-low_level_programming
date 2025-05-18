#include "main.h"

/**
  * _strcmp - Function That Compares Two Strings
  * @s1: String 1
  * @s2: String 2
  * Return: (s1 - s2) The difference of ASCII value of the string
  */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] == s2[index])
		{
			index++;
		}
		else
		{
			break;
		}
	}

	return (s1[index] - s2[index]);
}
