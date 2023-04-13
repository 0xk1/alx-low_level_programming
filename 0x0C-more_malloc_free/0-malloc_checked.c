#include <stdlib.h>

/**
 *  malloc_checked - function that allocates memory 
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if(!p)
		exit(98);

	return (p);

}
