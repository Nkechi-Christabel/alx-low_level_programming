#include <stdio.h>
#include <stdlib.h>


/**
 * print_opcodes - The program prints the opcodes of its own main function.
 * @func_ptr: Pointer to the function whose opcodes are to be printed.
 * @num: The number of bytes to print.
 *
 * Return: The opcodes of the provided function
 */
void print_opcodes(void (*func_ptr)(int), int num)
{
	char *ptr = (unsigned char *)func_ptr;
	int i;

	for (i = 0; i < num; i++)
		printf("%02hhx ", ptr[i] & 0xFF);

	printf("\n");
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

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((void (*)(int))main, num);

	return (0);
}
