#include "main.h"

/**
 * _print_rev_recursion - this function prints a string in reverse
 * @s: the string to print
 * Return: 0
 */
void_print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
