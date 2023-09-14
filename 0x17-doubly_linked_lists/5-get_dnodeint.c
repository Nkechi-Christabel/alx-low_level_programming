#include "lists.h"

/**
 * get_dnodeint_at_index - The program returns the nth node of a dlistint_t
 * linked list.
 * @head: A pointer to the head of the list
 * @index: The index of the node to return
 *
 * Return: The nth node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = head;

	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}

	return (curr);
}
