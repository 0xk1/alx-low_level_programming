
/**
 * _strlen - len of string
 * @s: pointer
 * Return: len of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
