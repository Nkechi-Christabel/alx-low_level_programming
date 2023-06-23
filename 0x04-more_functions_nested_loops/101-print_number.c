#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to print
 *
 */
void print_number(int n)
{
	short int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar('0' + (num % 10));
}
