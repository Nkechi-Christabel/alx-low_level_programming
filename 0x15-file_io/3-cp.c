#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * errors - Helper function to handle errors
 * @message: Error message
 * @filename: The initial file which is the 2nd argument
 * @fd1: File directory 1
 * @fd2: File directory 2
 * @status: Exit status
 */

void error_exit(const char *message, const char *filename, int fd1, int fd2,
		int status)
{
	if (filename)
		dprintf(STDERR_FILENO, message, filename);
	else
		dprintf(STDERR_FILENO, "%s", message);

	if (fd1 != -1)
		close(fd1);

	if (fd2 != -1)
		close(fd2);

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
	int file_to, file_from;
	ssize_t i, copied, result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: %s file_from file_to\n", NULL, -1, -1, 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file %s\n", argv[1], -1, -1, 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
		error_exit("Error: Can't write to %s\n", argv[2], file_from, -1, 99);

	while ((i = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		copied = 0;
		while (copied < i)
		{
			result = write(file_to, buffer + copied, i - copied);

			if (result == -1)
				error_exit("Error: Can't write to %s\n", argv[2], file_from,
						file_to, 99);

			copied += result;
		}
	}

	return (0);
}
