#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - The program locates a substring.
 * @haystack: The string to check.
 * @needle: The string or bytes to check for.
 *
 * Return: A pointer to the beginning of the locate substring NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *ptr = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (strchr(needle, haystack[i]))
		{
			ptr = needle;
			break;
		}
	}
		return (ptr);
}
