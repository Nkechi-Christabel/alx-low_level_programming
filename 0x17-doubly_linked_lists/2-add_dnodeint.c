#include "lists.h"

/**
 * add_dnodeint - It adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value of the element
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

		if (*head != NULL)
			(*head)->prev = new_node;

		*head = new_node;
	}

	return (new_node);
}


