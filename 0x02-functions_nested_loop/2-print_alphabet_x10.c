#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet,in lowercase.
  *
  * Return: 0 (success)
  */

void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
	{
		char letter = 97;

		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
