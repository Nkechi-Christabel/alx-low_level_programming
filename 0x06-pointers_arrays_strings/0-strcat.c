#include "main.h"
#include <string.h>

/**
 * _strcat - The program appends the src string to the dest string.
 * Description: Overwrites the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: The string to append to
 * @src: The string to append
 *
 * Return: A new string or chracters
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
