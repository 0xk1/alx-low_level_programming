



int *array_range(int min, int max)
{
	int *p;
	
	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);




}
