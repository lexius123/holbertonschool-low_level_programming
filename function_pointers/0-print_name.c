#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: function pointer to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
