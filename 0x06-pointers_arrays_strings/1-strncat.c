#include "main.h"
#include <string.h>

/**
 * _strncat - The program concatenates two strings.
 * @dest: The string to append to
 * @src: The string to append
 * @n: The number of chracters to append.
 *
 * Return: A new string or chracters
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
