#include <stdio.h>
#include <math.h>
/**
 * main - finds the largest prime
 * Description: Uses headers to link and a nested loops to achieve goal
 * Return: 0 if no errors
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
