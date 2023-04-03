#include "main.h"

/**
 * _strstr - findt the first occurrence
 * @haystack: string
 * @needle: substring
 * Return: a pointer to needle or NULL if no byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			while (*(needle + j))
			{
				if (*(needle + j) != *(haystack + i + j))
					break;
				j++;
			}
			if (*(needle + j) == '\0')
				return (haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
