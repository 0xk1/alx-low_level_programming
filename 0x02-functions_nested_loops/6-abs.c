/**
  * _abs - function that computes the absolute value of an integer.
  *  @c: int type number
  * Return: 1 or 0
  */


int _abs(int c)
{
	if (c < 0)
		return (c - c * 2);
	else
		return (c);
}
