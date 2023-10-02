#include <main.h>

/**
 * read_textfile - A function that reads a text file and prints it
 *	to the POSIX standard output.
 * @filename: Name of file
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print.
 *	if the file can not be opened or read, return 0.
 *	if filename is NULL return 0.
 *	if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t no_bytes_r, no_bytes_w, fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	no_bytes_r = read(fd, buffer, letters);

	no_bytes_w = write(STDOUT_FILENO, buffer, no_bytes_r);

	free(buffer);

	if (fd == -1 | no_bytes_r == -1 | no_bytes_w == -1)
		return (0);

	close(fd);

	return (no_bytes_w);
}
