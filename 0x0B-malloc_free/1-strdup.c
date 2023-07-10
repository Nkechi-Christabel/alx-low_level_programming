#include <stdlib.h>
#include <string.h>

/**
 *_strdup - The program returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to be duplicated.
 *
 * Return: Pointer to the string if sunccessful or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *strDup = malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (strDup)
	{
		strcpy(strDup, str);
		return (strDup);
	}

	return (NULL);

}
