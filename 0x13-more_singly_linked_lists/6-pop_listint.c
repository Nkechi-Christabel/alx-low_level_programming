#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head: Pointer to the node list to be deleted
 * Return: Returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	temp = *head;

	data = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
