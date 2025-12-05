#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if the file cannot be opened or read,
 * or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t actual_number, bytes_read;
	char *buf;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	actual_number = read(file, buf, letters);
	if (actual_number == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	bytes_read = write(STDOUT_FILENO, buf, actual_number);

	free(buf);
	close(file);
	if (bytes_read != actual_number)
	{
		return (0);
	}
	return (actual_number);
}
