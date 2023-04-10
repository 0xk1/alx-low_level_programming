/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: the prefix string
  * Return: the length of the prefix
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				j = 0;
				i++;
			}
			else
				j++;
		}
		break;
	}
	return (count);
}
