#include "main.h"
#include <stdio.h>

/**
 * _puts - this function prints a string, followed by a new line.
 *@str: parameter
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
