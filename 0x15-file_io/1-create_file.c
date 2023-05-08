#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: Name of text file.
 * @text_content: Null terminated string.
 * Return: 1 if successful or -1 if failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len_letters = 0;
	int buffer;

	if (!filename)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len_letters] != '\0')
			len_letters++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (len_letters > 0)
	{
		buffer = write(fd, text_content, len_letters);
		if (buffer == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
