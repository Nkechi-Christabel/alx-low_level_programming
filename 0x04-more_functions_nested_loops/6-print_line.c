#include "main.h"

/**
 * print_line - The program draws a straight line.
 * @n: The bumber of times'_' is printed.
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
