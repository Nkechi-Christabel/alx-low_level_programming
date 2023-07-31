#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list
 * @index: The index of the node
 *
 * Return: Returns a node or Null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int i = 0;

	while (i < index && head->next)
	{
		nth_node = head->next;
		i++;
	}

	if (!nth_node)
		return (NULL);

	return (nth_node);
}


