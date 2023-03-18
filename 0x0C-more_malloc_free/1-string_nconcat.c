#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len4 = 0, len5 = 0;

	while (s1 && s1[len4])
		len4++;
	while (s2 && s2[len5])
		len5++;

	if (n < len5)
		s = malloc(sizeof(char) * (len4 + n + 1));
	else
		s = malloc(sizeof(char) * (len4 + len5 + 1));

	if (!s)
		return (NULL);

	while (a < len4)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < len5 && a < (len4 + n))
		s[a++] = s2[b++];

	while (n >= len5 && a < (len4 + len5))
		s[a++] = s2[b++];

	s[a] =  '\0';

	return (s);
}
