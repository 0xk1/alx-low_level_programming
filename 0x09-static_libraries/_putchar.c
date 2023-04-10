#include <unistd.h>

/**
 * _putchar - writes the character c to sdout
 * @c: char
 * Return: 1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
