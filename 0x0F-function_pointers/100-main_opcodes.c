#include <stdio.h>
#include <stdlib.h>


/**
 * print_opcodes - The program prints the opcodes of its own main function.
 * @num: The number of bytes passed as an argument.
 *
 * Return: The opcodes of its own main function.
 */
void print_opcodes(int num)
{
	char *ptr = (char *)print_opcodes;
	int i;

	for (i = 0; i < num; i++)
		printf("%02x ", ptr[i] & 0xFF);

	putchar('\n');
}

/**
 * main - The program that prints the opcodes of its own main function.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num);

	return (0);
}
