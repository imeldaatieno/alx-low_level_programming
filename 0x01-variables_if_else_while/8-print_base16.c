#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by new line.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
char i, j;

for (i = '0'; i <= '9'; i++)
	putchar(i);

for (j = 'a'; j <= 'f'; j++)
	putchar(j);

putchar ('\n');

return (0);
}
