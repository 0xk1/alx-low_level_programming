#include "lists.h"
/**
 * add_nodeint_end - function that adds anew node at the end of a list
 * @head: head
 * @n: n
 * Return: address of the new element,or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
