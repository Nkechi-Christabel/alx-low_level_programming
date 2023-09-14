#include "lists.h"

/**
 * dlistint_len - The program returns the number of  elements in
 * dlistint_t list.
 * @h: A pointer to the head of the double linked list
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
