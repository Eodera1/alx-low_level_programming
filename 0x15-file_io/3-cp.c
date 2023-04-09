#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argv: An array of pointers to the arguments
 * @argc: The number of arguments supplied to the program
 * Return: 0 (success)
 *
 * Description: I f the argument count is incorrect - exit code 97.
 * If file_to cannot be created or written to - exit code 99.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0])
			exit(97);
	}

	int fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1])
			exit(98);
	}

	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	char buffer[BUFFER_SIZE];
	ssize_t read_size, write_size;

	while ((read_size = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_size = write(fd_to, buffer, read_size);
	}

	if (read_size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}
