#include "lists.h"

/**
 * free_dlistint - The program frees a dlistint_t list.
 * @head:  Pointer to the head of the list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
