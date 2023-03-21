#include "main.h"
/**
  * jack_bauer -  the longest day of my life
  *
  * Return: nothing
  */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
