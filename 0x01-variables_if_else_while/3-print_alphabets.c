#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - A  program that prints alphabet in lowercase, and then in uppercase
 *Description Entry point
 *Return: 0 (Success)
 */
int main(void)
{
	char Zm;

	Zm = 'a';
	for (Zm = 'a'; Zm <= 'x'; Zm++)
	{
		putchar(Zm);
	}
	Zm = 'Z';
	for (Zm = 'Z'; Zm <= 'X'; Zm++)
	{
		putchar(Zm);
	}
		putchar('\n');
		return (0);
}
