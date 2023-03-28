#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: string
  *
  * Return: void
  */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
		len++;
	len--;

	i = len / 2;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

