
/**
  * rev_string - reverse a string
  * @s: the string
  *
  * Return: void
  */


void rev_string(char *s)
{

	int len = 0;
	int i = 0;
	int j;
	int temp;

	while (*(s + len) != '\0')
		len++;
	len--;

	j = len;

	while (i <= (len / 2))
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
		j--;
	}
}

