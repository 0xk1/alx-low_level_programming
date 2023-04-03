#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: destination
  * @src: source
  * @n: number of bytes
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *s = src;

	while (n-- > 0)
	{
		*p++ = *s++;
	}

	return (dest);
}
