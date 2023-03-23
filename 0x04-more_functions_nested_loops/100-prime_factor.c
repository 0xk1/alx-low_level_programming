#include <stdio.h>

/**
  * main - Entry point
  * Description: desc of the function
  * Return: 0 (success)
  */


int main(void)
{
	unsigned long i = 2;
	unsigned long largest = 0;
	unsigned long n = 612852475143;

	while (n > i)
	{
		while (n % i == 0)
		{
			if (i > largest)
				largest = i;
			n = n / i;
		}
		i++;
	}
	printf("%lu\n", largest);

	return (0);
}
