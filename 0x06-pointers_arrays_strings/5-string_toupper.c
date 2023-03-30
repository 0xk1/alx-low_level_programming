#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 * @arr: the string
 * Return: the converted string
 **/

char *string_toupper(char *arr)
{
	int i = 0;

	while (arr[i])
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;

		i++;
	}

	return (arr);
}
