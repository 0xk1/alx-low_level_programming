#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: char
 * Return: 0 is success
 */

void _puts(char *str)
{
	int len = _strlen(str);
	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
