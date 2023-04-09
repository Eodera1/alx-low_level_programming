#include "main.h"
#include <string.h>

/**
 * append_text_file - a function that appends text at the end of a file
 * @filename:is the name of a file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_context != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_RDONLY | O_APPEND);
	t = read(fd, text_content, len);

	if (fd == -1 || t == -1)
		return (-1);

	close(o);

	return (1);
}
