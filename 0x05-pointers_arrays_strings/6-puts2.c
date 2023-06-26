#include "main.h"
#include <string.h>

/**
 * puts2 - The program prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: The string to be printed.
 *
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!(i % 2))
		_putchar(str[i]);

	}

	_putchar('\n');
}
