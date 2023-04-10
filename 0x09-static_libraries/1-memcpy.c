
/**
 * _memcpy - memcpy
 * @dest: dest
 * @src: src
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n-- > 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

