#include "main.h"

/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	bytes_written = write(file, text_content, length);
	if (bytes_written == -1 || (size_t)bytes_written != length)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
