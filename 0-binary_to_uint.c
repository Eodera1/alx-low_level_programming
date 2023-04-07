#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b:string containing a binary number
 *
 * Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0')
			result = result * 2;
		else if (b[j] == '1')
			result = result * 2 + 1;
		else
			return (0);
	}

	return (results);
}
