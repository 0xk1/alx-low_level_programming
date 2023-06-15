#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: h
 * Return: number of elemens in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
