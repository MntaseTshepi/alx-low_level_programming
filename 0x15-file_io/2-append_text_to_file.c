#include "main.h"

/**
 * append_text_to_file - Function appends text at the end of a file.
 * @filename: Name of text file.
 * @text_content: Null terminated string.
 * Return: 1 if successful or -1 if failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len_letters = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len_letters] != '\0')
			len_letters++;
		if (write(fd, text_content, len_letters) != len_letters)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
