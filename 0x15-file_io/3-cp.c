#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


/**
 * error_exit - Helper function to handle errors
 * @message: Error message
 * @filename: The initial file which is the 2nd argument
 * @status: Exit status
 */

void error_exit(const char *message, const char *filename, int status)
{
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");

	exit(status);
}

/**
 * main - The program copies the content of a file to another file
 * @argc: Counts the number of arguments supplied to the program
 * @argv: Array of strings that are the arguments passed to the program
 *
 * Return: 1 on sucess and exit if it fails
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, i, result;
	char buffer[1024];

	if (argc != 3)
		error_exit("Usage: file_from file_to", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file %s", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
		error_exit("Error: Can't write to %s", argv[2], 99);

	while ((i = read(file_from, buffer, 1024)) > 0)
	{
		result = write(file_to, buffer, i);

		if (result == -1)
			error_exit("Error: Can't write to %s", argv[2], 99);
	}

	if (i == -1)
		error_exit("Error: Can't read from file %s", argv[1], 98);

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (file_from == -1)
				? file_from : file_to);
		exit(100);
	}

	return (0);
}
