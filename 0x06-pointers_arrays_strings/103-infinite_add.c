#include "main.h"

/**
 * _strlen - strlen
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * infinite_add - infinite_add function
 * @n1: n1
 * @n2: n2
 * @r: buffer
 * @size_r: size of r
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, max, nbr1, nbr2, sum;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 + 1 >= size_r || len2 + 1 >= size_r)
		return (0);

	max = (len1 > len2) ? len1 : len2;

	i = 0;
	r[size_r--] = '\0';
	while (max-- >= 0)
	{
		nbr1 = (--len1 >= 0) ? (n1[len1] - '0') : 0;
		nbr2 = (--len2 >= 0) ? (n2[len2] - '0') : 0;

		sum = nbr1 + nbr2 + i;

		if (sum == 0)
			break;
		if (sum >= 10)
		{
			r[size_r--] = sum % 10 + '0';
			i = sum / 10;
		}
		else
		{
			r[size_r--] = sum + '0';
			i = 0;
		}
	}
	return (&r[++size_r]);
}
