#include "main.h"
/**
  * _memset - fills memory with a contant byte.
  * @s: buffer
  * @b: contant byte
  * @n: number of bytes to fill
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{

	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}

	return (s);
}
