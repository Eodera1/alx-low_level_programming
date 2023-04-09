#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @letters:number of letters to be read
 * @filename:text file to be read
 * Return:w - the actual number of letters it could read and print
 *  0 when the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t w;
	ssize_t t;

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
