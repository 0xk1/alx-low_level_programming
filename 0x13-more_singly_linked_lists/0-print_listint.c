#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int i = 0;
	
	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);

}
