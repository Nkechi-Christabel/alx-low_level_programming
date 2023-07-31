#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - The program prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		count++;

		h = h->next;
	}

	return (count);
}
