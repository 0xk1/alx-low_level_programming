#include "main.h"
void print_to_98(int n)
{	
	if (n == 98)
	{
		_putchar(98 / 10 + '0');
		_putchar(98 % 10 + '0');
		_putchar('\n');
	}
	else if (n < 98)
	{
		while (n <= 98)
		{	
			if (n >= -9 && n < 10)	
				_putchar(n);
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
