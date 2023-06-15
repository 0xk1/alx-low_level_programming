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
