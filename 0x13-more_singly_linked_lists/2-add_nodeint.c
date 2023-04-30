#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: double pointer to list_t
 * @n: n
 * Return: address of the new node or null if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
