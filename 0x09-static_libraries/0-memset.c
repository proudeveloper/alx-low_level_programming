#include "main.h"

/**
 * _memset - this function fills memory with constant byte
 * @s: the address to be written for the memory
 * @b: the byte
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
