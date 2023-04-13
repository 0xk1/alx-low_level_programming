#include <stdlib.h>

/**
 * _strlen - len of string
 * @c: pointer to string
 * Return: len of string
 */
int _strlen(char *c)
{
	int i = 0;

	while (*(c + i))
		i++;
	return (i);
}

/**
 * string_nconcat - concat two strings
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	p = malloc(_strlen(s1) + n + 1);

	if (!p)
		return (NULL);

	while (*(s1 + i))
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	while (n-- > 0)
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
