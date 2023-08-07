#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @letters: The number of letters it should read and print.
 * @filename: The file to read.
 *
 * Return: Actual number of letters it could read and print or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_fl, write_fl;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buf = malloc(letters);
	if (!buf)
	{
		return (0);
	}

	read_fl = read(fd, buf, letters);
	if (read_fl == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[read_fl] = '\0';
	write_fl = write(STDOUT_FILENO, buf, read_fl);

	free(buf);

	if (write_fl == read_fl)
	{
		return (0);
	}
	close(fd);

	return (read_fl);
}

