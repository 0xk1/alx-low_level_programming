#include "lists.h"



/**
 * print_list - printa all the elements of a list
 * @h: constant pointer type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	list_t const *curr = h;

	while (curr)
	{
		i++;
		if (curr->str)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[%c] %s\n", '0', "(nil)");

		curr = curr->next;
	}
	return (i);
}
