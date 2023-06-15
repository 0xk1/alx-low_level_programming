#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data(n) of a linked list
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
