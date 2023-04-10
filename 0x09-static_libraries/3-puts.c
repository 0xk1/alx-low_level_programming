#include "main.h"

/**
 * _puts - wirte string
 * @s: string
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		s++;
	}
	_putchar('\n');
}
