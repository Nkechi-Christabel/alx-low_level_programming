#include "main.h"
#include <stdio.h>

/**
 * main - Prints even  Fibonacci numbers below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, next, num1 = 1, num2 = 2;

	printf("%d, %d", num1, num2);

	for (i = 3; i <= 98; i++)
	{
		next = num1 + num2;

		printf(", %d", next);

		num1 = num2;
		num2 = next;
	}

	printf("\n")

	return (0);
}
