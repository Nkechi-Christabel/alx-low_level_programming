#include "main.h"

/**
 * print_diagonal - The program draws a diagonal line.
 * @n: The number of times'\' is printed.
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}

	_putchar('\n');
}
