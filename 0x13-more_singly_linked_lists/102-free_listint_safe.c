#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *current = *h;
    listint_t *next_node;

    while (current)
    {
        next_node = current->next;

        current->next = NULL;
        free(current);

        current = next_node;
        node_count++;

        if (current == *h)
        {
            *h = NULL;
            break;
        }
    }

    return (node_count);
}

