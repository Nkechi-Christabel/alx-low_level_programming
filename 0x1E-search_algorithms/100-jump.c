#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), current = jump, prev = 0, i;
	
	if (array == NULL)
		return -1;

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			       current, array[current]);

        	prev = current;
       		current += jump;
   	}

	printf("Value found between indexes %lu and %lu\n",
			prev, current);

    	for (i = prev; i < size && array[i] <= value; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);

        	if (array[i] == value)
			return i;
   	 }

	return -1;
}
