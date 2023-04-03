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
	int i = 0;
	int j = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				j = 0;
				i++;
			}
			else
				j++;

		}
		break;
	return (count);
}
