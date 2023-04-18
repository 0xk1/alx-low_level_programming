#include <stdio.h>

/**
 * main - function that print the name of thefile it was compiled from
 * Return: result
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
