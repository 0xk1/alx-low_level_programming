
/**
  * _islow -  function that checks for lowercase character.
  *
  * Return: 1 or 0
  */


int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
