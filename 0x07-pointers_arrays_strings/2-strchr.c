#include <string.h>

/**
 * _strchr - The program locates a character in a string.
 * @s: The string to check.
 * @c: The character to check for.
 *
 * Return: A pointer to the first occurrence of the character c or NULL.
 */
char *_strchr(char *s, char c)
{
	int i, len = strlen(s);
	char *ptr = NULL;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else
			ptr = NULL;
	}
		return (ptr);
}
