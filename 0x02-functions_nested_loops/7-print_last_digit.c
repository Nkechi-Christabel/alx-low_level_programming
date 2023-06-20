#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - The program prints the last digit of a number.
 *
 * @n: The number to return its last digit.
 *
 * Return: Returns the last digit of a number(int n)
 */
int print_last_digit(int n)
{
	return (_putchar('0' + (n % 10)));
}
