
/**
  * _islower -  function that checks for lowercase character.
  *  @c: char type letter
  * Return: 1 or 0
  */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
