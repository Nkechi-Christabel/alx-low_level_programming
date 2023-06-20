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
	_putchar('0' + (abs(abs(n) % 10)));

	return (0);
}
