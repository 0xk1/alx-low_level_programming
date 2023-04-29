#include "lists.h"

/**
 * list_len - return sthe numbers of elements in list_t
 * @h: constant pointer tyep list_t
 * Return: numbers of elements in list_t
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);

}
