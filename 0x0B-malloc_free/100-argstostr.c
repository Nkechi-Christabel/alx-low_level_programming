#include <stdlib.h>
#include <string.h>

/**
 * argstostr - It concatenates all the arguments of your program.
 * Description: Each argument should be followed by a \n in the new string
 * @av: Number of arguments
 * @av: An array of argument strings
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

	str = malloc((len + 1)  * sizeof(char));

	if (str == NULL)
		return (NULL);

	strcpy(str, av[0]);
	strcat(str, "\n");

	for (i = 1; str != NULL && i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}


	return (str);

}
