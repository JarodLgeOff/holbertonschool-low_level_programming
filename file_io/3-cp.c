#include "main.h"
#include <stdio.h>
/**
 * close_andprint - Closes a file descriptor and prints
 * an error message if it fails.
 * @fd: The file descriptor to be closed.
 *
 * Return: 0 on success, 100 on failure.
 */

int close_andprint(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * writing_oops - Checks for errors in file descriptors
 * for reading and writing operations.
 * @fd1: File descriptor for reading.
 * @fd_go: File descriptor for writing.
 * @filename: Name of the file being processed.
 *
 * Return: 0 if no errors, 98 if read error, 99 if write error.
 */

int writing_oops(int fd1, int fd_go, char *filename)
{
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (98);
	}
	if (fd_go == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (99);
	}
	return (0);
}

/**
 * reading_oops - Checks for errors in file descriptors
 * for reading and writing operations.
 * @fd1: File descriptor for reading.
 * @fd_go: File descriptor for writing.
 * @filename: Name of the file being processed.
 *
 * Return: 0 if no errors, 98 if read error, 99 if write error.
 */
int reading_oops(int fd1, int fd_go, char *filename)
{
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (98);
	}
	if (fd_go == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (99);
	}
	return (0);
}

/**
 * error_close - Closes two file descriptors and checks for errors.
 * @fd_back: First file descriptor to be closed.
 * @fd_go: Second file descriptor to be closed.
 *
 * Return: 0 if both closed successfully, 100 if any close fails.
 */

int error_close(int fd_back, int fd_go)
{
	int err_close;

	err_close = 0;
	if (close_andprint(fd_back) == 100)
	{
		err_close = 100;
	}
	if (close_andprint(fd_go) == 100)
	{
		err_close = 100;
	}
	return (err_close);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exit with error code on failure.
 */


int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t nread;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((nread = read(fd_from, buffer, 1024)) > 0)
		if (write(fd_to, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	return (0);
}