#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Description: single digit numbers of base 10 starting from 0
 *Return: 0 (Succsess)
 */
int main(void)
{
	int y;

	for (y = 0; y <= 10; y++)
	{
		if (y != 10)
		printf("%d", y);
	}
	printf("\n");
	return (0);
}
