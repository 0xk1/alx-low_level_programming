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
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb + 1);
	if (!p)
		return (NULL);

	while (*(p + i))
	{
		*(p + i) = 0;
		i++;
	}

	return (p);

}
