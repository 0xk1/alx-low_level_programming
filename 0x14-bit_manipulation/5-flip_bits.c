#include "main.h"

/**
 * flip_bits - count the bit to change to another value
 * @n: the number
 * @m: the number to compare
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
