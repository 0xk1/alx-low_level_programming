/**
 * _strlen - return the length of a string
 *
 * @s: char
 *
 * Return: 0 (Success)
 */



int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
