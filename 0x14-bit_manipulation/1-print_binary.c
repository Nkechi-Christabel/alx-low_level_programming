#include "main.h"

/**
 * print_binary_recursion - Helper function to print the binary
 * representation of a number.
 * @n: The number to convert to binary
 */
void print_binary_recursion(unsigned long int n)
{
	if (n > 1)
		print_binary_recursion(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number toconvert to binary
 */
void print_binary(unsigned long int n)
{
	 print_binary_recursion(n);
}


