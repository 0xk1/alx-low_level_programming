#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
/**
 * insert_dnodeint_at_index -  function that inserts a new node
 * at a given position.
 * @h: h
 * @idx: idx
 * @n: n
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;

	if (!h)
		return (0);

	if (!idx)
		return (add_dnodeint(h, n));

	temp = get_dnodeint_at_index(*h, idx - 1);

	if (!temp)
		return (0);

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
