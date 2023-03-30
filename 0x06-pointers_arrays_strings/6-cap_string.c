#include "main.h"

/**
 * cap_string - Captilizes the string given as parameter
 * @arr: the string
 * Return: the captilized string
 **/

char *cap_string(char *arr)
{
	int i = 0;

	if (arr[i] >= 'a' && arr[i] <= 'z')
		arr[i] -= 32;

	while (arr[i])
	{
		if (arr[i - 1] == ' ' || arr[i - 1] == '\t'
		|| arr[i] == '\n' || arr[i - 1] == ','
		|| arr[i - 1] == ';' || arr[i - 1] == '.'
		|| arr[i - 1] == '!' || arr[i - 1] == '?'
		|| arr[i - 1] == '\"' || arr[i - 1] == '('
		|| arr[i - 1] == ')' || arr[i - 1] == '{'
		|| arr[i - 1] == '}')
		{
			if (arr[i] >= 'a' && arr[i] <= 'z')
				arr[i] -= 32;
		}
		i++;
	}

	return (arr);
}
