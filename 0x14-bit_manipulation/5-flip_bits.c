#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another.
 * @m:first number
 * @n:second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

