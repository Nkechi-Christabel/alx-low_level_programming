#include <string.h>

/**
 * _memcpy - The program copies memory area.
 * @dest: The memory area to copy to.
 * @src: The memory area to copy from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int len = strlen(dest);

	for (i = len; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
