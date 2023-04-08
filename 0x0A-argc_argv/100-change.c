#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: args count
 * @argv: args array
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int nbr;
	int i = 0;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		nbr = atoi(argv[1]);

		while (nbr > 0)
		{
			while (nbr >= coins[i])
			{
				nbr -= coins[i];
				count++;
			}
			i++;
		}
		printf("%d\n", count);
	}
	return (0);
}
