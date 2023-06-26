#include <string.h>

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * @dest: The buffer to copy into
 * @src: The pointer string to copy
 *
 * Return: Return the copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
