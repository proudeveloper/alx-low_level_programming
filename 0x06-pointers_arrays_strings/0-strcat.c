#include "main.h"

/**
 * _strcat - this function concantenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
