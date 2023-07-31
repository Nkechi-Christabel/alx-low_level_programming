#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - It adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of the list
 * @n: The numbers to add
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;

		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}

