#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - The program concatenates two strings.
 * @s1: The string to be concatenated to.
 * @s2: The string to concatenate to s1.
 * @n: The number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer to the allocated memory on success or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = strlen(s1), len2 = strlen(s2);
	int len = n >= len2 ? (len1 + len2) : (len1 + n);

	str = malloc(len + 1 * sizeof(char));

	if (str != NULL)
	{
		strcpy(str, s1);

		if (n >= len2)
			strcat(str, s2);

		strncat(str, s2, n);
	}

	return (str);
}
