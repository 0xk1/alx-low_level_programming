#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
