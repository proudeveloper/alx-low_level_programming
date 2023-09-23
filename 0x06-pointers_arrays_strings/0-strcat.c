#include "main.h"

/**
 * _strncat - this function concantenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
 */
char *_strncat(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; dest[n] != '\0' ; n++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';

	return (dest);



}
