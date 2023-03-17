#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{

				putchar(i);
				putchar(j);
				putchar(k);

				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
