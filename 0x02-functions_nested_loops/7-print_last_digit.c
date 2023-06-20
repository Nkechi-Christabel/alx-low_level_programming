#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - The program prints the last digit of a number.
 *
 * @n: The number to return its last digit.
 *
 * Return: Always 0 (Success)`
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	_putchar('\n');

	return (0);
}
