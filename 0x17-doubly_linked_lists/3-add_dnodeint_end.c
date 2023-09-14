#include "lists.h"

/**
 * add_dnodeint_end - It adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value of the element
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;

		if (!*head)
		{
			new_node->prev = NULL;
			*head = new_node;
		}
		else
		{
			curr = *head;
			while (curr->next)
				curr = curr->next;

			curr->next = new_node;
			new_node->prev = curr;
		}
	}

	return (new_node);
}
