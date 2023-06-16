#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, last_n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				last_n = 1;
			}

			if (!last_n)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

