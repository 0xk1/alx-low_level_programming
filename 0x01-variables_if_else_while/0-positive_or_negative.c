#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - Entry point
  * Description:Positive anything is better than negative nothing
  * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n > 0)
	{
		printf("%d is positive", n);
	} else
		printf("%d is zero", n);
	return (0);
}
