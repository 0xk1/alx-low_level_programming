#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of linked list
 * @head: head
 * @n: n
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	new->prev = curr;

	return (new);
}
