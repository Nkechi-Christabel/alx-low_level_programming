#include "main.h"
#include <string.h>

/**
 * puts_half - The program prints half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 */
void puts_half(char *str)
{
	size_t i, len = strlen(str);

	if (len % 2 > 0)
	{
		int n = (len - 1) / 2;

		_putchar(str[n]);
	}

	else
	{

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);

	}
	}
	_putchar('\n');
}
