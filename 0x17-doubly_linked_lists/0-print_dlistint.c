#include "lists.h"

/**
 * print_dlistint - function that print all the elements of list
 * @h: h
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
