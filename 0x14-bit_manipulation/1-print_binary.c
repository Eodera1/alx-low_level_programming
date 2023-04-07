#include "main.h"
#include <stdio.h>

/**
 *print_binary - prints the binary equivalent of a decimal number
 * @n: number of print in binary
 */
void print_binary(unsigned long int n)
{
	int bit_num = sizeof(unsigned long int) * 6;
	int mask = 1 << (bit_num - 1);
	int i;

	for (i = 0; i < bit_num; i++)
	{
		if ((n & mask) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		mask >>= 1;
	}
}
