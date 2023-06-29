#include <ctype.h>

/**
 * cap_string - The function capitalizes the first character of
 * all words in a string.
 * @str: The string to capitalize
 *
 * Return: The str, the updated string.
 */
char *cap_string(char *str)
{
	int next = 1;

	for (; *str != '\0'; str++)
	{
		if (next && isalpha(*str))
		{
			*str = (char)toupper((unsigned char)*str);
			next = 0;
		}
		else if (isspace(*str) || ispunct(*str))
			next = 1;

	}

	return (str);
}


