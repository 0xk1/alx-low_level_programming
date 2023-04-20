#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - funtion that prints numbers
 * @separator: the string to be printed betwen numbers
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);


	while (i < n)
	{
		if (i != n - 1 && separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
		i++;
	}
	printf("\n");

}

