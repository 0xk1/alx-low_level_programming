#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: array
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;

	p = malloc(i * sizeof(char) + 1);

	if (!p)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(p + i) = *(str + i);
		i++;
	}

	return (p);

}
