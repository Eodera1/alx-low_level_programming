#include "main.h"

/**
 * get_endianness - checks small or big endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *p = (char *)&j;

	return (*p);
}
