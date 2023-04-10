#include "main.h"

/**
  * _strlen - calculate the len of str
  * @s:  string
  *
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
  * _strstr - locates a substring
  * @haystack: the string
  * @needle: the substring
  *
  * Return: pointer to the beginning of the located substring or null
  */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0;
	int matches = 0;

	needle_len = _strlen(needle);
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			needle -= matches;
			haystack -= (matches - 1);
			matches = 0;
			continue;
		}
		haystack++;
		needle++;
		matches++;
		if (matches == needle_len)
			break;
	}
	if (matches == needle_len)
		return (haystack - matches);
	return (0);
}
