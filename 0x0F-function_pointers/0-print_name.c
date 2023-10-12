#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function prints a name
 * @f: parameter
 * @name: name of the person
 * Return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
