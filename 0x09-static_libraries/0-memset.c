#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address to be written to
 * @b: the byte to write
 * @n: number of bytes to write
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
