#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}

	for (letter = 65; letter <= 90; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
