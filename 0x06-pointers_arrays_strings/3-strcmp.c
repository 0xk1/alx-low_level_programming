#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: s1[i] - s2[i]
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (15);
			return (-15);
		}
		i++;
	}

	return (0);
}
