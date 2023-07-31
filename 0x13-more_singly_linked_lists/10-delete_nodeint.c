#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list.
 * @index: Index of the list where the new node should b removed
 *
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	temp = *head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	return (1);
}
