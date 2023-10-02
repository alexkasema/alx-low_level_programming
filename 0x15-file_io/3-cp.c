#include "main.h"

/**
 * main - A program that copies contents of a file from one file to another
 * @ac: Number of arguments passed to program
 * @av: Array of string arguments
 *
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int dest, src, no_bytes_r, no_bytes_w;
	char *buffer[BUFFERSIZE];

	if (ac != 3)
		_error(97, "Usage: cp file_from file_to\n", av[0]);

	src = open(av[1], O_RDONLY);
	if (src == -1)
		_error(98, "Error: Can't read from file %s\n", av[1]);

	dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		_error(99, "Error: Can't write to %s\n", av[2]);

	while ((no_bytes_r = read(src, buffer, BUFFERSIZE)) > 0)
	{
		no_bytes_w = write(dest, buffer, no_bytes_r);
		if (no_bytes_w == -1)
			_error(99, "Error: Can't write to %s\n", av[2]);
	}
	if (no_bytes_r == -1)
		_error(98, "Error: Can't read from file %s\n", av[1]);

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}

/**
 * _error - A function that prints the error message and exits with a code
 * @code: The exit code
 * @str: Error message
 * @file: Name of the file
 * Return: Nothing
 */

void _error(int code, const char *str, const char *file)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}
