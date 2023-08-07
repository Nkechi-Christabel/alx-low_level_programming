#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_fl;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		write_fl = write(fd, text_content, strlen(text_content));

		if (write_fl == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

