#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: integer lenght of a string
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
