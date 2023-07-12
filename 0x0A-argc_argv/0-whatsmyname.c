#include <stdio.h>

/**
* main - prints the name of the program followed by a new line
* @argc: number of arguments passed the function
* @argv: argument vector of pointers to string
*
* Return: always 0
**/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
