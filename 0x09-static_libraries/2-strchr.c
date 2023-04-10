
/**
 * _strchr - strchr
 * @s: str
 * @c: char
 * Return: s or null
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (0);

}
