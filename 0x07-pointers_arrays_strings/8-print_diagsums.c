#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a squeare matrix
 *
 * @a: pointer to an integer
 * @size: int
 * Description: print chessboard
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int s = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (s < size)
	{
		sum1 += a[(size + 1) * s];
		s++;
	}

	s = 1;

	while (s < size + 1)
	{
		sum2 += a[(size - 1) * s];
		s++;
	}

	printf("%d, %d\n", sum1, sum2);
}
