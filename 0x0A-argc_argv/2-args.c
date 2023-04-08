#include <stdio.h>

/**
 * main - main function
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
