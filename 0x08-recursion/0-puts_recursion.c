#include"main.h"

/**
 * _puts_recursion - The program prints a string, followed by a new line.
 * @s: The string to print.
 *
 */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
