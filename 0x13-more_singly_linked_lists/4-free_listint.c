#include "lists.h"


/**
 * free_listint - The program frees a listint_t list.
 * @head:  Pointer to the head of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *next, *curr = head;

	while (curr)
	{
		next = curr->next;
		free(curr);

		curr = next;
	}
}
