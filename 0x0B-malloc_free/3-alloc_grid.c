#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2d array
 */


int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (!p)
		return (NULL);

	while (i < height)
	{
		j = 0;
		*(p + i) = malloc(sizeof(int) * width);
		if (!*(p + i))
		{
			while (j < i)
			{
				free(*(p + j));
				j++;
			}
			free(p);
			return (NULL);
		}
		j = 0;

		while (j < width)
		{
			*(*(p + i) + j) = 0;
			j++;
		}
		i++;
	}

	return (p);

}
