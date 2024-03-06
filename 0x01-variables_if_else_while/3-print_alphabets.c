#include <stdio.h>
/**
 * main - prints an alphabet in lowercase, then uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet;

for (alphabet = "a"; alphabet <= "z"; alphabet++)
	putchar(alphabet);

for (i = "A"; alphabet <= "Z"; alphabet++)
	putchar(alphabet);

putchar(\n);

return (0);
}
