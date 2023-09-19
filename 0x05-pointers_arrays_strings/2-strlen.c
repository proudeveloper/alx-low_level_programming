#include "main.h"

/**
 * _strlen - this function returns the lenght of a string
 * @s: this is the integer
 * Return: void
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}
