#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: number of element
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);

	while (i < (size * nmemb))
	{
		*(p + i) = 0;
		i++;
	}

	return (p);

}
