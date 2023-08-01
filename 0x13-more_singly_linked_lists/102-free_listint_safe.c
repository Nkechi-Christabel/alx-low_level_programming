#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0, index;
    listint_t *current = *h;
    listint_t *next_node;
    listint_t **visited_nodes = malloc(sizeof(listint_t *) * 1024);

    if (!visited_nodes)
        exit(98);

    while (current)
    {
        next_node = current->next;

        for (index = 0; index < node_count; index++)
        {
            if (visited_nodes[index] == current)
            {
                free(visited_nodes);
                *h = NULL;
                return node_count;
            }
        }

        visited_nodes[node_count] = current;
        node_count++;

        free(current);
        current = next_node;
    }

    free(visited_nodes);
    *h = NULL; 
    return node_count;
}

