#include "main.h"

/**
 * _strlen - this function returns the lenght of a string
 * @s: this is the integer
 * Return: void
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[1] != '\0'; i++)
		count++;
	return (count);
}
