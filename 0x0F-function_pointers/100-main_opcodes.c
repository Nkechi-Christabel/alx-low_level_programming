#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - The program prints the opcodes of its own main function.
 * @func_ptr: Pointer to the function whose opcodes are to be printed.
 * @num_bytes: The number of bytes to print.
 *
 * Return: The opcodes of the provided function
 */
void print_opcodes(void (*func_ptr)(int), int num_bytes)
{
	char *ptr = (unsigned char *)func_ptr;
	int i;

	for (i = 0; i < num_bytes - 1; i++)
		printf("%02hhx ", ptr[i] & 0xFF);

	printf("%02hhx\n", ptr[num_bytes - 1]);
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
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((void (*)(int))main, num_bytes);

	return (0);
}
