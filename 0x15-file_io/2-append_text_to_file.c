#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of file.
 * @text_content: Text to append to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, no_bytes_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		no_bytes_w = write(fd, text_context, _strlen(text_content));
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
 * _strlen - A function that calculates the length of a string
 * @str: String input
 * Return: Length of string
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
