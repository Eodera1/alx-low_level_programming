#include "main.h"

/**
 * _islower - check for lower
 *@c: returns 1 if lower.
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
