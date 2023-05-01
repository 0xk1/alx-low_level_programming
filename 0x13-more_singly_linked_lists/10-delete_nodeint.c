#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index @index
 * of a listint_t linkded list
 * @head: double pointer to head
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
		return (1);
	}

	curr = *head;
	prev = *head;

	while (curr)
	{
		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}

	return (-1);
}
