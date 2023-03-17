#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
