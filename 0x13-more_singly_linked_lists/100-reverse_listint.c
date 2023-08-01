#include "lists.h"

/**
 * reverse_listint - The program reverses a listint_t linked list.
 * @head: Pointer to the head of the list
 *
 * Return: Returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *current = *head;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
