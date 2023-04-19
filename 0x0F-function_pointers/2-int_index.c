#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: ponter to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
