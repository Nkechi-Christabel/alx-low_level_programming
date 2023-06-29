#include <ctype.h>

/**
 * string_toupper - The function changes all lowercase letters of a string
 * to uppercase.
 * @str: The string to change its characters
 *
 * Return: The str, the updated string.
 */
char *string_toupper(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (islower(*str))
			*str = (char)toupper((unsigned char)*str);

	}

	return (str);
}


