#include "main.h"

#define BUFFER_SIZE 1024
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
