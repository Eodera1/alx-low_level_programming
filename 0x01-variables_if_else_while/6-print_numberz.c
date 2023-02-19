#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Description: print single digits of base 10 strating from 0.
 * your are not allowed to use any char
 * Return: Zero
*/

int main(void)
{
int num1 = 48;
while (num1 <= 57)
{
putchar(num1);
++num1;
}
putchar('\n');
return (0);
}
