/**
  * _isdigit -  function that checks for a digit (0 through 9).
  * @c: int type number
  * Return: 1 or 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
