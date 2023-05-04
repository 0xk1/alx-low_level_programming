#include "main.h"

/**
 * _strlen - size of string
 * @s: pointer to string
 * Return: len
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: dec number
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, dec = 0, power = 1;

	if (!b)
		return (0);

	len = _strlen(b);

	while (--len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			dec += power;

		power *= 2;

	}

	return (dec);
}
