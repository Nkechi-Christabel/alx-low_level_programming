#include "main.h"

/**
 * times_tabl - The program prints the 9 times table, starting with 0.
 *
 * Return: The multiplication of numbers from 0 - 9;
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;

			if (times <= 9)
			{
				_putchar('0' + times);
			}

			else
			{
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}

			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
