#include "main.h"

/**
  * _strspn - gets the lenght of a prefix substring
  * @s: string
  * @accept: the prfix string
  * Return: tehe leneght of the prefix
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*p++ == *s)
				break;
		}
		count++;
		s++;

		if (!*p)
			return (count);
	}
	return (count);
}
