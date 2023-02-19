#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - A program that prints alphabet in lowercase
 *Description Entry point
 *Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
