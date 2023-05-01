#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next, *curr;

	if (!head || !*head)
		return;

	curr = *head;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}
