#include "main.h"
/**
  * _isupper - function that checks for uppercase character.
  * @c: int type number
  * Return: 1 if upper 0 if not
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
