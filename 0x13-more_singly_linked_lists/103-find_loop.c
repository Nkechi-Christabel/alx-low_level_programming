#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is
 * no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one_step, *two_steps;

	if (head == NULL || head->next == NULL)
		return (NULL);

	one_step = head;
	two_steps = head;

	while (two_steps && two_steps->next)
	{
		one_step = one_step->next;
		two_steps = two_steps->next->next;

		if (one_step == two_steps)
		{
			one_step = head;

			while (one_step != two_steps)
			{
				one_step = two_steps->next;
				two_steps = two_steps->next;
			}

			return (one_step);
		}
	}

	return (NULL);
}

