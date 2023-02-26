#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
