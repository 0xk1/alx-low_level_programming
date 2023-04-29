#include "lists.h"


/**
 * free_list - free list_t
 * @head: pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next = head;

	if (!head)
	{
		free(head);
		return;
	}

	while (curr)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
	free(next);
	free(curr);
}
