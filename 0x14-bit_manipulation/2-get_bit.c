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
	int bit_val;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit_val = (n >> index) & 1;

	return (bit_val);
}
