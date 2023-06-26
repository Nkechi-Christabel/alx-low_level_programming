#include "main.h"
#include <string.h>

/**
 * puts_half - The program prints half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 */
void puts_half(char *str)
{
	int i, n, len = strlen(str);

	if (len % 2 > 0)
		n = ((len - 1) / 2 ) + 1;

	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);

	}
	
	_putchar('\n');
}
