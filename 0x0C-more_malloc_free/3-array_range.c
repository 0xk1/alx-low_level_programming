#include <stdlib.h>

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: pointer
 */



int *array_range(int min, int max)
{
	int *p;
	int i = 0;
	
	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);




}
