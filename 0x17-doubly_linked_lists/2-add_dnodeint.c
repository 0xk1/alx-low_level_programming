#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginnig
 * of a dlistint_t list.
 * @head: head
 * @n: n
 * Return: address of the new element or null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
