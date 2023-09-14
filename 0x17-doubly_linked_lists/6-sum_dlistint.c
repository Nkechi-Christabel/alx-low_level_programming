#include "lists.h"

/**
 * sum_dlistint - The program sums all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the list
 *
 * Return: The sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
