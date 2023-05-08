#include "main.h"

#define BUFF_SIZE 1024

/**
 * file_err - prints error message
 * @msg: Pointer to error message
 * @filename: Pointer to filename
 * @exit_code: Exit code parameter
 * Return: Void
 */

void file_err(char *msg, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(exit_code);
}

/**
 * main - check code
 * @argc: Argument count
 * @argv: Argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, val_read, val_write;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		file_err("Usage: %s file_from file_to \n", argv[0], 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		file_err("Error: Can't read from file %s\n", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd_to == -1)
		file_err("Error: Can't write to %s\n", argv[2], 99);
	while ((val_read = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		val_write = write(fd_to, buffer, val_read);
		if (val_write != val_read)
			file_err("Error: Can't write to %s\n", argv[2], 99);
	}
	if (val_read == -1)
		file_err("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

