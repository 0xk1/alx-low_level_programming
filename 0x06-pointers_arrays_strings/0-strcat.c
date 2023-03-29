/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
