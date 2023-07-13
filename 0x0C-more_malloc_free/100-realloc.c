#include <stdlib.h>

/**
 * _realloc - The program reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: It's the size, in bytes, of the allocated space for ptr
 * @mnew_size: Ir's the new size, in bytes of the new memory block
 *
 * Return: Pointer to new memory block on success or NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		mem = realloc(new_size * sizeof(unsigned int));

	mem = realloc(ptr, (new_size + old_size) * sizeof(unsigned int));


	return (mem);

}
