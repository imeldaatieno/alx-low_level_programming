#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name being printed
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	return;
		f(name);
}
