#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Execute
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a, i,;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}

