#include "main.h"
/**
 * _strpbrk - searches a strings for any of a set bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the first accurrence of any bytes in the s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*a == *s)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
