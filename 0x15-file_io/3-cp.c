#include "main.h"
#include <stdlib.h>

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
	int fd_from, fd_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", argv[0]);
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(fd_from, buffer, 1024);

	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	w = write(fd_to, buffer, r);
	if (fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

	r = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);


	}

	return (0);
}
