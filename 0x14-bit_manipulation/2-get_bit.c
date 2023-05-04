#include "main.h"

/**
 * get_bit - return one bit
 * @n: number
 * @index: pos of bit
 * Return: tha value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 0x1);
}
