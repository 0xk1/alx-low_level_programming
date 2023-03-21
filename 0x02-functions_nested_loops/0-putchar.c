#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Return: 0 (success)
  */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
