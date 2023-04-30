#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
