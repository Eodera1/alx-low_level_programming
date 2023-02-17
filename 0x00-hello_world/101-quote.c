#include <stdio.h>
/**
 * main - A program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 0 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO,"and that piece of art is usefull \" -Dora Korpar, 2015-10-19 \n",59);
	write(STDOUT_FILENO, "and that piece of art is usefull \"
	-Dora Korpar, 2015-10-19 \n", 59);
	return (1);
}
