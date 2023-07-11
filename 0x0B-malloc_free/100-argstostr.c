#include <stdlib.h>
#include <string.h>

/**
 * argstostr - It concatenates all the arguments of your program.
 * Description: Each argument should be followed by a \n in the new string
 * @av: Number of arguments
 * @ac: An array of argument strings
 *
 * Return: Pointer to the concatenated string if successful or
 * NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	len += ac + 1;

	str = malloc(len * sizeof(char));

	strcpy(str, av[0]);

	for (i = 1; str != NULL && i < ac; i++)
	{
		strcat(str, "\n");
		strcat(str, av[i]);
	}

	strcat(str, "\n");

	return (str);

}
