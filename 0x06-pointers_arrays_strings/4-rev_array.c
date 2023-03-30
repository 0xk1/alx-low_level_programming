#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 * Return: 0
 **/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
