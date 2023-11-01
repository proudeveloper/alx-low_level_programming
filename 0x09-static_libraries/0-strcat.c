#include "main.h"

/**
 * _strcat - this function concantenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';
	return (dest);

}
