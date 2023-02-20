#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Return: Zero
*/

int main(void)
{
int num1 = 48
 int num2 = 0
int num3;
int comm_num = 44;
while (num1 <= 99)
{
num1 = num3 + 1;
while (num3 <= 99)
{
putchar((num1 / 10) + num1);
putchar((num1 % 10) + num1);
putchar(32);
putchar((num3 / 10) + num1);
putchar((num3 % 10) + num1);
if (num3 != 98 || num3 != 99)
{
putchar(comm_num);
putchar(32);
}
++num3;
}
++num3;
}
putchar('\n');
return (0);
}
