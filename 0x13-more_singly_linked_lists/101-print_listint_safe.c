#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    listint_t *current = (listint_t *)head, **visited_nodes;
    size_t node_count = 0, index;
    size_t max_nodes = 10;
    listint_t **temp;

    visited_nodes = malloc(max_nodes * sizeof(listint_t *));

    if (!visited_nodes)
	    exit(98);

    while (current)
    {
        if (node_count == max_nodes)
        {
            max_nodes *= 2;
            temp = realloc(visited_nodes, max_nodes * sizeof(listint_t *));
            if (!temp)
            {
                free(visited_nodes);
                perror("Memory reallocation error");
                exit(98);
            }
            visited_nodes = temp;
        }

        for (index = 0; index < node_count; index++)
        {
            if (visited_nodes[index] == current)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                free(visited_nodes);
                exit(98);
            }
        }

        visited_nodes[node_count++] = current;
        printf("[%p] %d\n", (void *)current, current->n);

        current = current->next;
    }

    free(visited_nodes);
    return node_count;
}

