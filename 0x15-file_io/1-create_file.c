#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Name of file to create
 * @text_content: String to write to file
 *
 * Return: 1 on success, -1 on failure
 *	The created file must have those permissions: rw-------
 *	if the file already exists, truncate it
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, no_bytes_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		no_bytes_w = write(fd, text_content, _strlen(text_content));
		if (no_bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

/**
 * _strlen - A function that calculates the length of string
 * @str: String input
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
