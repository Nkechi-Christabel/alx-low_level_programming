#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - The program prints a buffer
 * @b: Char pointer to the buffer
 * @size: Size of the buffer to be printed
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", (unsigned char)b[j]);
			else
				printf("   ");
		}
		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
				{
					if (b[j] == '\n')
						printf("\\n");
					else
						printf(".");
				}
			}
			else
				 printf(" ");
		}
		printf("\n");
	}
}
