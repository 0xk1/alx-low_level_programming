#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: double pointer to head
 * Return: head node's data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *curr, *next;
	int data;

	if (!head || !*head)
		return (0);

	curr = *head;
	data = curr->n;
	next = curr->next;
	free(curr);
	*head = next;
	return (data);
}
