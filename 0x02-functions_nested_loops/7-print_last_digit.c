#include "main.h"
/**
  * print_last_digit -  function that prints the last digit of a number..
  *  @n: int type number
  * Return: number
  */


int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
