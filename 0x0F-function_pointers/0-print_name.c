
/**
 * print_name - function that prints a name.
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
