#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @index:ondex of the bit
 * @n:number to search
 *
 * Return:the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int index;

	if (index >= sizeof(unsigned long int) * 4)
	{
		return (-1);
	}
	index = (n >> index) & 1;

	return (undex);
}
