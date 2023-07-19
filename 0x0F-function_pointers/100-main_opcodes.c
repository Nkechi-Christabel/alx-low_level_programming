#include <stdio.h>

/**
 * main - The program that prints the opcodes of its own main function.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return - 0 always (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		prntf("Error\n");
		exit(1);
	

