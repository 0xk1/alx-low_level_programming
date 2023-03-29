#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n:  bytes from src
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
