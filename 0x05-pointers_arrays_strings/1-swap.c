
/**
 * swap_int - swap the values of two integers
 *
 * @a: int
 * @b: int
 * Return: 0 is success
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
