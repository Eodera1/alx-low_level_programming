#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a given bit to 0
 * @index:index of the bit to set
 * @n:pointer to the number to change
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << index);
	return (1);
}
