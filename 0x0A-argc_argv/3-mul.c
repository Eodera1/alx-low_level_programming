#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, b, m, len, g, digit;

	i = 0;
	b = 0;
	m = 0;
	len = 0;
	g = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && g == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				digit = digit;
			m = m * 10 + digit;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}

	if (g == 0)
		return (0);
	return (m);
}
