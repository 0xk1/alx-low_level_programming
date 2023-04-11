#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory to allocate
 * @c: char to initialize the array with.
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);
	if (!p)
		return (NULL);

	while (size-- > 0)
		*(p + size) = c;

	return (p);
}
