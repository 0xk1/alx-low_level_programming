#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *sep = "";

	va_start(ags, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					prinf("%s%f", sep, va_arg(args, float));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
