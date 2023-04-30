#include "lists.h"

/**
 * _strlen - len of string
 * @str: str
 * Return: len
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node - adds a new node
 * @head: double pointer to list_t
 * @str: str
 * Return: a pointer to the new string or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
