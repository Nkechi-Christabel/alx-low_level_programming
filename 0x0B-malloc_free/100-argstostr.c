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
	int i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	len--;

	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	strcpy(str, av[0]);

	for (i = 1; i < ac; i++)
	{
		strcat(str, "\n");
		strcat(str, av[i]);
	}

	strcat(str, "\n");

	return (str);

}
