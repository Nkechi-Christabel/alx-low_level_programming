#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL..
 * @head:  Pointer to the head of the list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *curr = *head;

	while (curr)
	{
		next = curr->next;
		free(curr);

		curr = next;
	}

	*head = NULL;
}
