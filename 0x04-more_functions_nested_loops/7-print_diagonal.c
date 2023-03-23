#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: int type number
 * Return: void. no return.
 */


void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < n)
		{
			i = 0;

			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}


