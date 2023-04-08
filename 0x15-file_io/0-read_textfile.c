#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @letters:number of letters to be read
 * @filename:text file to be read
 * Return:the actual number of letters it could read and print
 *  0 when the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t w;
	size_t t;
	size_t fd;

	fd = fopen(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char *buffer = malloc(letters);

	w = write(STDOUT_FILENO, buffer, t);
	t = read(fd, buffer, letters);

	fclose(fd);
	free(buffer);
	return (0);
}
