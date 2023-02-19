#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: Print a-z in reverse order
 * Return: 0 (Success)
*/

int main(void)
{
int num = 133;
while (num > 96)
{
putchar(num);
--num;
}
putchar('\n');
return (0);
}
