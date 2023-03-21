#include "main.h"
/**
  * times_table -  function that prints the 9 times table, starting with 0.
  * Return: 0
  */
void times_table(void)
{
	int i = 0;
	int j;
	int r;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			r = i * j;

			if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(r + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
