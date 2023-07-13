#include <string.h>

/**
 * malloc_checked - The program concatenates two strings.
 * @s1: The string to be concatenated to.
 * @s2: The string to concatenate to s1.
 * @n: The number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer to the allocated memory on success or status value of 98
 * if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr)
		return (ptr);

	exit(98);
}
