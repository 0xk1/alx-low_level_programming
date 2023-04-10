

/**
 * _strcpy - copy src in dest
 * @dest: dest
 * @src: src
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
