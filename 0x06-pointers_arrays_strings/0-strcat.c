#include "main.h"

/**
 * _strncat - this function concantenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strncat(char *dest, char *src)
{
	int j;
	int i;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
	       	dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);

}
