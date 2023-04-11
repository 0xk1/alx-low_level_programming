#include <stdlib.h>

/**
 * _strlen - len of string
 * @s: pointer
 * Return: size of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);
	p = malloc(len + 1);

	if (!p)
		return (NULL);

	while (*(s1 + i))
	{
		*(p + i) =  *(s1 + i);
		i++;
	}

	while (*(s2 + j))
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}

	return (p);
}
