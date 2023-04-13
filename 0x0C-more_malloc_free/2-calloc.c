#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);

	while (*(p + i))
	{
		*(p + i) = 0;
		i++;
	}

	return (p);

}
