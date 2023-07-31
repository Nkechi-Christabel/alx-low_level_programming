#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - The program returns the number of elements in a linke
 * listint_t list.
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);
}
