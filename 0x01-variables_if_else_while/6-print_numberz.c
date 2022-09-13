#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Execute
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
