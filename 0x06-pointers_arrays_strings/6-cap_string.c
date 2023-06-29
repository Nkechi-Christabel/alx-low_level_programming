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
	int next = 1, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (next && isalpha(str[i]))
		{
			str[i] = (char)toupper((unsigned char)str[i]);
			next = 0;
		}

		if (isspace(str[i]) || ispunct(str[i]))
			next = 1;

		else
			next = 0;
	}

	return (str);
}


