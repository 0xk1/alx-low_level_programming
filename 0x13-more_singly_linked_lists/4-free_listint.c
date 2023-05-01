#include "lists.h"


/**
 * free_listint - function that frees a listint_t list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{

	while (head)
	{
		listint_t *next = head->next;

		free(head);
		head = next;
	}
}
