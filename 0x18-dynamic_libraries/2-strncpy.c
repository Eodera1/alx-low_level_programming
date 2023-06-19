#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
