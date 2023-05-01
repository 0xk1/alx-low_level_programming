#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to head
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum  = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
