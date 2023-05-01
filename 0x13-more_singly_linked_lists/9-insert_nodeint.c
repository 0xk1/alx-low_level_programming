#include "lists.h"

/**
 * insert_nodeint_at_index - funtoin that inserts a new node at
 * a given position
 * @head: double pointer to head
 * @idx: the index of the list where the new node should be addedd
 * @n: n
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *curr, *prev;
	unsigned int i = 0;

	if (!newNode)
		return (NULL);

	curr = *head;

	while (curr)
	{
		if (i == idx)
		{
			newNode->n = n;
			newNode->next = curr;
			prev->next = newNode;
			return (newNode);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}

	return (NULL);
}
