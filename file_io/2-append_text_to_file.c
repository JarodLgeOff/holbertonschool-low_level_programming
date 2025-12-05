#include "main.h"

/**
 * append_text_to_file - appends text_content to the end of a file
 * @filename: name of the file to append to
 * @text_content: string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);
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
